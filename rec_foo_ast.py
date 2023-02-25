# this abstact syntaxy tree (ast) is related to
# https://github.com/dynaroars/dynaplex/commit/6901535db5b0ab41149d6b03de3b471187ca773e
# https://www.starexec.org/starexec/services/benchmarks/5162484/contents?limit=-1
import ast

def add_depth_argument(code):
    tree = ast.parse(code)

    class AddDepthVisitor(ast.NodeTransformer):
        def visit_FunctionDef(self, node):
            node.args.args.append(ast.arg(arg='depth', annotation=None)) 
            for subnode in ast.walk(node):
                if isinstance(subnode, ast.Call) and subnode.func.id == node.name:
                    subnode.args.append(ast.Name(id='depth', ctx=ast.Load()))
            return self.generic_visit(node)

    updated_tree = AddDepthVisitor().visit(tree)
    updated_code = ast.unparse(updated_tree)
    return updated_code

code = """
def rec_foo(x):
    if not x > verfier_nondet_int():
        return 0
    x-=1
    return rec_foo(x)
"""

updated_code = add_depth_argument(code)
print(updated_code)
