import ast

def add_depth(code):
    tree = ast.parse (code)

    class add_depth_visitor(ast.NodeTransformer):
        def visitor_function(self,node):
            node.args.args.append(ast.args(arg='depth', annotation='none'))
            for subnode in ast.walk(node):
                if isinstance(subnode, ast.node) and subnode.fuc.id== node.name:
                    subnode.arg.append(ast.name(id='depth', ctx=ast.Load()))
            return self.generic_visit(node)
    update_tree= add_depth_visitor().visit(tree)
    update_code= ast.unparse(update_tree)
    return update_code
code="""
def rec_foo(x,y):
    if not x>=0:
        return 0
    x= x-y
    return rec_foo(x,y)
"""
update_code = add_depth(code)
print(update_code)