import ast
import astor

class FunctionTransformer(ast.NodeTransformer):
    def visit_FunctionDef(self, node):
        if node.name == 'isEven':
            # Add a comment to the function
            node.body.insert(0, ast.parse('"""This function checks if a number is even"""').body[0])
            # Change the function body to check if the number is even
            node.body = [ast.If(
                test=ast.BinOp(left=ast.Name(id='n', ctx=ast.Load()), op=ast.Mod(), right=ast.Num(n=2)),
                body=[ast.Return(value=ast.Constant(value=False))],
                orelse=[ast.Return(value=ast.Constant(value=True))]
            )]
        return node

source_code = """
def isEven(n):
    return n % 2 == 0
"""

tree = ast.parse(source_code)
transformer = FunctionTransformer()
new_tree = transformer.visit(tree)
new_source_code = astor.to_source(new_tree)

print(new_source_code)