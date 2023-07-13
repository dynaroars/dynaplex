# https://www.starexec.org/starexec/services/benchmarks/5162484/contents?limit=-1
import ast
#from ast import *

def add_depth_argument(code, func_name):
    tree = ast.parse(code)

    class AddDepthVisitor(ast.NodeTransformer):
        def visit_FunctionDef(self, node):
            if (node.name == func_name):
                node.args.args.append(ast.arg(arg='depth', annotation=None)) # adds depth to function arguments
                for subnode in ast.walk(node):
                    if isinstance(subnode, ast.Call) and subnode.func.id == node.name:
                        subnode.args.append(ast.BinOp(left=ast.Name(id='depth', ctx=ast.Load()),op=ast.Add(),
        right=ast.Constant(value=1))) # adds depth+1 to recursive call
                return self.generic_visit(node)

    updated_tree = AddDepthVisitor().visit(tree)
    updated_code = ast.unparse(updated_tree)
    return updated_code

code = """
def bubble_sort(arr, n):
    
    if n==1:
        return arr

    for i in range(n-1):
    
        if arr[i]>arr[i+1]:
            arr[i], arr[i+1] = arr[i+1], arr[i]

    return bubble_sort(arr, n-1)

"""

updated_code = add_depth_argument(code, "bubble_sort")
print(updated_code)
