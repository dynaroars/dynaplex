import ast

def depth(statement):
    tree = ast.parse(statement)

    class add_depth(ast.NodeTransformer):
        def visit_FunctionDef(self, node):
            # Add a new argument 'depth' to the function definition
            node.args.args.append(ast.arg(arg='depth', annotation=None))

            # Add the 'depth' argument to all function calls inside the function body
            for subnode in ast.walk(node):
                if isinstance(subnode, ast.Call) and isinstance(subnode.func, ast.Name) and subnode.func.id == node.name:
                    subnode.args.append(ast.Name(id='depth', ctx=ast.Load()))

            return self.generic_visit(node)

    update_tree = add_depth().visit(tree)
    update_code = ast.unparse(update_tree)
    return update_code

code = """
def rec_foo(x):
    if not x > verifier_nondet_int():
        return 0
    x -= 1
    return rec_foo(x)
"""

update_code = depth(code)
print(update_code)
