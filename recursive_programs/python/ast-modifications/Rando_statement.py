# https://www.starexec.org/starexec/services/benchmarks/5162484/contents?limit=-1
#from ast import *
import ast
#import statements
import random
import trace

def add_depth_argument(code, func_name):
    tree = ast.parse(code)

    class AddDepthVisitor(ast.NodeTransformer):

        def visit_FunctionDef(self, node):
        # adds depth to function arguments
            if (node.name == func_name):
                node.args.args.append(ast.arg(arg='depth', annotation=None)) 
                for subnode in ast.walk(node):
                    # adds depth+1 to recursive call
                    if isinstance(subnode, ast.Call) and subnode.func.id == node.name:
                        subnode.args.append(ast.BinOp(left=ast.Name(id='depth', ctx=ast.Load()),op=ast.Add(),
                         right=ast.Constant(value=1)))
                return self.generic_visit(node)
            visit_Function = random.choice(ast.functions)

    updated_tree = AddDepthVisitor().visit(tree)
    updated_code = ast.unparse(updated_tree)
    return updated_code

code ="""
def bubble_sort(arr, n):
    
    if n==1:
        return arr

    for i in range(n-1):
    
        if arr[i]>arr[i+1]:
            arr[i], arr[i+1] = arr[i+1], arr[i]

    return bubble_sort(arr, n-1)

"""
"""
Method 2: 
 
Method 3: add trace statements
 > on function entry: given size as the problem size 
 function entry can be considered as appending at the beginning of stmt list
    add tracing.trace(depth, size) and tracing.increment(depth)
ummary_
"""
updated_code = add_depth_argument(code, "bubble_sort")
print(updated_code)


function_names = ast.walk(ast.parse(updated_code))
function_names = [node.name for node in function_names if isinstance(node, ast.FunctionDef)]
random_function = random.choice(function_names)
