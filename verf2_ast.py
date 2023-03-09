import ast

def depth(statement):
    tree = ast.parse(statement)

    class add_depth(ast.NodeTransformer):
        def visit_FunctionDef(self, node):
            # Add a new argument 'depth' to the function definition
            new_arg = ast.arg(arg='depth', annotation=None)
            node.args.args.append(new_arg)

            # Add the 'depth+1' argument to all function calls inside the function body
            for subnode in ast.walk(node):
                if isinstance(subnode, ast.Call) and isinstance(subnode.func, ast.Name) and subnode.func.id == node.name:
                    subnode.args.append(ast.BinOp(left=ast.Name(id='depth', ctx=ast.Load()), op=ast.Add(), right=ast.Constant(value=1)))

            return self.generic_visit(node)

    update_tree = add_depth().visit(tree)
    update_code = ast.unparse(update_tree)
    return update_code

code = """
def rec_foo(x):
    if not x > verifier_nondet_int():
        return 0
    x -= 1
    return rec_foo(x, depth+1)
"""

update_code = depth(code)
print(update_code)
