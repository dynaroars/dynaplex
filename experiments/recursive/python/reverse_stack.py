def insertAtBottom(stack, item):
    if isEmpty(stack):
        push(stack, item)
    else:
        temp = pop(stack)
        insertAtBottom(stack, item)
        push(stack, temp)

def reverse(stack: list[int]) -> list:
    if not isEmpty(stack):
        temp = pop(stack)
        reverse(stack)
        insertAtBottom(stack, temp)

def isEmpty( stack ):
    return len(stack) == 0

def push( stack, item ):
    stack.append( item )

def pop( stack ):
    if(isEmpty( stack )):
        exit(1)
    return stack.pop()

