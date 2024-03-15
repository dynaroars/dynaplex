import ast
import subprocess
from pathlib import Path
import argparse
import tempfile
import astor
import random
import string

# Visitor to traverse AST and collect traces to compute recurrences
class RecTraceVisitor(ast.NodeTransformer):
    def __init__(self, target_function_name, size):
        self.target_function_name = target_function_name
        self.size = size

    def visit_Module(self, node):
        import_random = ast.Import(names=[ast.alias(name='random', asname=None)])
        node.body = [import_random] + node.body

        return self.generic_visit(node)

    def visit_FunctionDef(self, node):
        if (node.name == self.target_function_name):
            new_stmt = ast.Expr(value=ast.Call(
                func=ast.Name(id='print', ctx=ast.Load()),
                args=[
                    ast.Name(id='depth', ctx=ast.Load()),
                    ast.Constant(value=";", kind=None),
                    ast.Name(id=self.size, ctx=ast.Load())],
                keywords=[]
            ))
            node.body.insert(0, new_stmt)
            node.args.args.append(ast.arg(arg='depth', annotation=None))
            for subnode in ast.walk(node):
                if isinstance(subnode, ast.Call) and hasattr(subnode.func, 'id'):
                    if subnode.func.id == node.name:
                        subnode.args.append(ast.BinOp(
                            left=ast.Name(id='depth', ctx=ast.Load()),
                            op=ast.Add(),
                            right=ast.Constant(value=1)
                        ))
        
        return self.generic_visit(node)


# Visitor to traverse AST and collecct traces to compute difference constraints
class DcTraceVisitor(ast.NodeTransformer):
    def __init__(self, loop_ids):
        self.loop_ids = loop_ids

    def visit_For(self, node):
            var_name = "depth_{}".format(node.lineno)
            loop_id = self.loop_ids[node.lineno]
            depth_assignment = ast.Assign(
                targets=[ast.Name(id=var_name, ctx=ast.Store())],
                value=ast.Constant(value=0, kind=None)
            )
            depth_increment = ast.Expr(value=ast.AugAssign(target=ast.Name(id=var_name, ctx=ast.Store()), op=ast.Add(), value=ast.Constant(value=1, kind=None)))
            trace_dc = ast.Expr(value=ast.Call(func=ast.Name(id="print", ctx=ast.Load()), args=[
                ast.Constant(value=f"{loop_id}", kind=None),
                ast.Constant(value=";", kind=None),
                ast.Name(id=var_name, ctx=ast.Load()),
                ast.Constant(value=";", kind=None),
                ast.Name(id=node.target.id, ctx=ast.Load())
            ], keywords=[]))
            node.body = [depth_increment, trace_dc] + node.body
            return [depth_assignment, node]

    def visit_While(self, node):
        # fix to figure out what the loop counter is
        var_name = "depth_{}".format(node.lineno)
        depth_assignment = ast.Assign(
            targets=[ast.Name(id=var_name, ctx=ast.Store())],
            value=ast.Constant(value=0, kind=None)
        )
        depth_increment = ast.Expr(value=ast.AugAssign(target=ast.Name(id=var_name, ctx=ast.Store()), op=ast.Add(), value=ast.Constant(value=1, kind=None)))
        node.body.insert(0, depth_increment)
        return [depth_assignment, node]
    
# Visitor to traverse AST and collecct traces to compute loop invariants
class InvTraceVisitor(ast.NodeTransformer):
    def __init__(self, loop_ids, size):
        self.loop_ids = loop_ids
        self.size = size

    def modifier(self, node):
        loop_id = self.loop_ids[node.lineno]
        random_string = ''.join(random.choices(string.ascii_lowercase, k=6))
        counter = ast.Assign(targets=[ast.Name(id=random_string, ctx=ast.Store())], value=ast.Constant(value=0, kind=None))
        counter_increment = ast.Expr(value=ast.AugAssign(target=ast.Name(id=random_string, ctx=ast.Store()), op=ast.Add(), value=ast.Constant(value=1, kind=None)))
        trace_inv = ast.Expr(value=ast.Call(func=ast.Name(id="print", ctx=ast.Load()), args=[
            ast.Constant(value=f"{loop_id}", kind=None),
            ast.Constant(value=";", kind=None),
            ast.Name(id=self.size, ctx=ast.Load()),
            ast.Constant(value=";", kind=None),
            ast.Name(id=random_string, ctx=ast.Load())
        ], keywords=[]))
        node.body = [counter_increment] + node.body
        return [counter, node, trace_inv]
    
    def visit_For(self, node):
        return self.modifier(node)

    def visit_While(self, node):
        return self.modifier(node)
    
    def visit_Module(self, node):
        import_random = ast.Import(names=[ast.alias(name='random', asname=None)])
        node.body = [import_random] + node.body

        return self.generic_visit(node)
    

# Visitor to traverse AST and collecct traces to estimate polynomial bound
class EstTraceVisitor(ast.NodeTransformer):
    def modifier(self, node):
        glob = ast.Assign(targets=[ast.Name(id="counter", ctx=ast.Store())], value=ast.Constant(value=0, kind=None))
        counter_increment = ast.Expr(value=ast.AugAssign(target=ast.Name(id="counter", ctx=ast.Store()), op=ast.Add(), value=ast.Constant(value=1, kind=None)))
        node.body = [counter_increment] + node.body
        return [glob, node]
    
    def visit_For(self, node):
        return self.modifier(node)

    def visit_While(self, node):
        return self.modifier(node)
    
    def visit_Module(self, node):
        import_random = ast.Import(names=[ast.alias(name='random', asname=None)])
        node.body = [import_random] + node.body

        return self.generic_visit(node)
    

def random_input_code(filename, func_name):
    tree = read_file(filename)
    
    class FuncVisitor(ast.NodeVisitor):
        def __init__(self, func_name):
            self.func_name = func_name
            self.func_ast = None
        
        def visit_FunctionDef(self, node):
            if node.name == self.func_name:
                self.func_ast = node
    
    visitor = FuncVisitor(func_name)
    visitor.visit(tree)
    return visitor.func_ast

def append_run_statement(tree, function_name, loop=0, rec=False, est=False):
        typ = ""
        class SubscriptVisitor(ast.NodeVisitor):
            def __init__(self):
                self.typ = ""
            def visit_Name(self, node):
                if isinstance(node.ctx, ast.Load):
                    self.typ = self.typ + "-" + node.id
                self.generic_visit(node)
            def get_typ(self):
                return self.typ[1:]

        for node in ast.walk(tree):
            if isinstance(node, ast.FunctionDef) and node.name == function_name:
                function_node = node
                arguments = []
                for arg in function_node.args.args:
                    if arg.annotation and type(arg.annotation) == ast.Name:
                        typ = arg.annotation.id
                        arguments.append(typ)
                    elif arg.annotation and type(arg.annotation) == ast.Subscript:
                        vis = SubscriptVisitor()
                        vis.visit(arg.annotation)
                        arguments.append(vis.get_typ())
                    else:
                        assert False, "Unsupported input type: failed to generate random input"
                break
        inputs = []
        input_stmt = []
        for i in range(len(arguments)):
            if arguments[i] == "int":
                random_input = random_input_code("tracing.py", "integer")
                tree.body.append(random_input)
                input = ast.Assign(targets=[ast.Name(id=f"input_{i}", ctx=ast.Store())], value=ast.Call(func=ast.Name(id='integer', ctx=ast.Load()), args=[], keywords=[]))
                if i==0:
                    size = ast.Name(id=f"input_{i}", ctx=ast.Load())
                inputs.append(ast.Name(id=f"input_{i}", ctx=ast.Load()))
            elif arguments[i] == "list-int":
                random_input = random_input_code("tracing.py", "int_list")
                tree.body.append(random_input)
                if i==0:
                    size = ast.Call(func=ast.Name(id='len', ctx=ast.Load()), args=[ast.Name(id=f"input_{i}", ctx=ast.Load())], keywords=[])
                input = ast.Assign(targets=[ast.Name(id=f"input_{i}", ctx=ast.Store())], value=ast.Call(func=ast.Name(id='int_list', ctx=ast.Load()), args=[], keywords=[]))
                inputs.append(ast.Name(id=f"input_{i}", ctx=ast.Load()))
            elif arguments[i] == "str":
                random_input = random_input_code("tracing.py", "string")
                tree.body.append(random_input)
                if i==0:
                    size = ast.Call(func=ast.Name(id='len', ctx=ast.Load()), args=[ast.Name(id=f"input_{i}", ctx=ast.Load())], keywords=[])
                input = ast.Assign(targets=[ast.Name(id=f"input_{i}", ctx=ast.Store())], value=ast.Call(func=ast.Name(id='string', ctx=ast.Load()), args=[], keywords=[]))
                inputs.append(ast.Name(id=f"input_{i}", ctx=ast.Load()))
            elif arguments[i] == "list-tuple-int-int":
                random_input = random_input_code("tracing.py", "int_tuple_list")
                tree.body.append(random_input)
                if i==0:
                    size = ast.Call(func=ast.Name(id='len', ctx=ast.Load()), args=[ast.Name(id=f"input_{i}", ctx=ast.Load())], keywords=[])
                input = ast.Assign(targets=[ast.Name(id=f"input_{i}", ctx=ast.Store())], value=ast.Call(func=ast.Name(id='int_tuple_list', ctx=ast.Load()), args=[], keywords=[]))
                inputs.append(ast.Name(id=f"input_{i}", ctx=ast.Load()))
            elif arguments[i] == "Node":
                random_input = random_input_code("tracing.py", "node")
                tree.body.append(random_input)
                if i==0:
                    size = ast.Call(func=ast.Name(id='len', ctx=ast.Load()), args=[ast.Name(id=f"input_{i}", ctx=ast.Load())], keywords=[])
                input = ast.Assign(targets=[ast.Name(id=f"input_{i}", ctx=ast.Store())], value=ast.Call(func=ast.Name(id='node', ctx=ast.Load()), args=[], keywords=[]))
                inputs.append(ast.Name(id=f"input_{i}", ctx=ast.Load()))
            else:
                assert False, "Unsupported input type: failed to generate random input"
            input_stmt.append(input)

        if loop>0:
            if est:
                counter = ast.Assign(targets=[ast.Name(id="counter", ctx=ast.Store())], value=ast.Constant(value=0, kind=None))
                run_stmt = ast.Expr(ast.For(target=ast.Name(id='i', ctx=ast.Store()), iter=ast.Call(func=ast.Name(id='range', ctx=ast.Load()), args=[ast.Constant(value=loop, kind=None)], keywords=[]), 
                              body=[counter] + input_stmt + [ast.Expr(ast.Call(func=ast.Name(id=function_name, ctx=ast.Load()), args=inputs, keywords=[])), 
                                                             ast.Expr(ast.Call(func=ast.Name(id='print', ctx=ast.Load()), args=[ast.Name(id='counter', ctx=ast.Load()), ast.Constant(value=";", kind=None), size], keywords=[]))], orelse=[]))
                tree.body = tree.body + [run_stmt]
                return tree
            else:
                run_stmt = ast.Expr(ast.For(target=ast.Name(id='i', ctx=ast.Store()), iter=ast.Call(func=ast.Name(id='range', ctx=ast.Load()), args=[ast.Constant(value=loop, kind=None)], keywords=[]), 
                              body=input_stmt + [ast.Expr(ast.Call(func=ast.Name(id=function_name, ctx=ast.Load()), args=inputs, keywords=[]))], orelse=[]))
        else:
            run_stmt = input_stmt + [ast.Expr(ast.Call(func=ast.Name(id=function_name, ctx=ast.Load()), args=inputs, keywords=[]))]

        if rec:
            run_stmt = input_stmt + [ast.Expr(ast.Call(func=ast.Name(id=function_name, ctx=ast.Load()), args=inputs+[ast.Constant(value=0, kind=None)], keywords=[]))]

        
        tree.body = tree.body + run_stmt
        
        return tree

def is_recursive_function(filename, function_name):
    tree = read_file(filename)

    # Find the function definition
    for node in ast.walk(tree):
        if isinstance(node, ast.FunctionDef) and node.name == function_name:
            function_node = node
            break
    else:
        print(f"Function '{function_name}' not found in file '{filename}'")
        return False

    # Check if the function calls itself
    for node in ast.walk(function_node):
        if isinstance(node, ast.Call) and isinstance(node.func, ast.Name) and node.func.id == function_name:
            return True

    return False

def read_file(filename):
    # reads the source code and parses it into AST
    with open(filename, 'r') as file:
        code = file.read()
    return ast.parse(code)

def find_loop_ids(filename):
    ids = []
    with open(filename, 'r') as file:
        for line in file.readlines():
            line = line.strip()
            if line.startswith("###"):
                _, id = line.split(" ")
                ids.append(id)
    loop_ids = {int(id.split("_")[0]): id for id in ids}
    return loop_ids


def collect_trace(filename, tracefile):
    # collects trace from the instrumented program
    command = ['/opt/homebrew/bin/python3', filename]
    output_file = open(tracefile, 'w')
    completed_process = subprocess.run(command, stdout=output_file, stderr=subprocess.PIPE)
    assert completed_process.returncode == 0, f"Failed to run {filename} to collect trace"
    output_file.close()
    return

def create_temp_file():
    # creates temporary file to store instrumented program
    temp_file = tempfile.NamedTemporaryFile(mode='w', delete=False)
    return temp_file.name
    
    
def write_to_file(filename, code):
    with open(filename, 'w') as file:
        file.write(code)
        return


def main():
    #Collect input
    parser = argparse.ArgumentParser(prog="instrument")
    parser.add_argument('-p', help="path/to/program")
    parser.add_argument('-f', help="Target function to analyze", default="")
    parser.add_argument('-size', help="Problem Size", default="")
    args = parser.parse_args()
    full_path = Path(args.p).resolve()
    target_function = args.f
    problem_size = args.size

    is_recursive = is_recursive_function(full_path, target_function)
    loop_ids = find_loop_ids(full_path) # todo: skip invariant generation if no loop is found

    # collect recurrence inference traces
    if is_recursive:
        code = read_file(full_path)
        recvisitor = RecTraceVisitor(target_function, problem_size)
        reccode = append_run_statement(code, target_function, rec=True)
        reccode = recvisitor.visit(reccode)
        rec_tracefile = create_temp_file()
        rec_codefile = create_temp_file()
        write_to_file(rec_codefile, astor.to_source(reccode))
        collect_trace(rec_codefile, rec_tracefile)
        print("Recurrence trace for {} collected in {}".format(rec_codefile, rec_tracefile))

        # collect polynomial bound estimation traces
        code = read_file(full_path)
        estvisitor = EstTraceVisitor()
        estcode = append_run_statement(code, target_function, loop=50, est=True)
        estcode = estvisitor.visit(estcode)
        est_tracefile = create_temp_file()
        est_codefile = create_temp_file()
        write_to_file(est_codefile, astor.to_source(estcode))
        collect_trace(est_codefile, est_tracefile)
        print("Polynomial bound estimation trace for {} collected in {}".format(est_codefile, est_tracefile))
        
    
    # collect invariant generation traces
    code = read_file(full_path)
    invvisitor = InvTraceVisitor(loop_ids, problem_size)
    invcode = append_run_statement(code, target_function)
    invcode = invvisitor.visit(invcode)
    inv_tracefile = create_temp_file()
    inv_codefile = create_temp_file()
    write_to_file(inv_codefile, astor.to_source(invcode))
    collect_trace(inv_codefile, inv_tracefile)
    print("Invariant trace for {} collected in {}".format(inv_codefile, inv_tracefile))

    # collect difference constraint traces
    code = read_file(full_path)
    dcvisitor = DcTraceVisitor(loop_ids)
    dccode = append_run_statement(code, target_function)
    dccode = dcvisitor.visit(dccode)
    dc_tracefile = create_temp_file()
    dc_codefile = create_temp_file()
    write_to_file(dc_codefile, astor.to_source(dccode))
    collect_trace(dc_codefile, dc_tracefile)
    print("Difference constraint trace for {} collected in {}".format(dc_codefile, dc_tracefile))


if __name__ == "__main__":
    main()