import ast
import random
import trace

def Add_depth_argument(code, func_name):
    tree= ast.parse(code)
    
    class AddDepthVisitor(ast.NodeTransformer):
        
        def visit_FunctionDef(self, node):
            if(node.name == func_name):
                # Add depth argument to the function head arguments
                node.args.args.append(ast.arg(arg='depth',annotation=None))
                for subnode in ast.walk(node):
                    # add depth+1 to the function call
                    if isinstance(subnode, ast.Call) and subnode.func.id == node.name:
                        subnode.args.append(ast.BinOp(left=ast.Name(id='depth',ctx=ast.Load()), op=ast.Add(),right=ast.Constant(value=1)))
                        return self.generic_visit(node)
       
    
    updated_tree = AddDepthVisitor().visit(tree)
    updated_code = ast.unparse(updated_tree)
    
     #creates a list of of function names from the ast tree            
    function_names = [node.name for node in ast.walk(tree) if isinstance(node, ast.FunctionDef)]
    
    #use random.choice to select the function name from the list of function names
    random_function_names = random.choice(function_names)
    print(random_function_names)
    return updated_code
code="""
def fibonacci(n):
    # if depth==0:
    #     global counter
    #     counter = counter + 1
    # with open(file, 'a') as f:
    #     print("{};{}".format(depth, n), file=f)

    if n<2:
        return n
    else:
        return fibonacci(n-2) + fibonacci(n-1)
"""
    
updated_code= Add_depth_argument(code, "fibonacci")
print(updated_code)
