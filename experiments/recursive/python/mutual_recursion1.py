def foo(x):
    if(x < 1):
        return 1
    else:
        return foo(x-1) + bar(x-1)


def bar(x):
    if(x < 2):
        return 1
    else:
        return foo(x-1) + bar(x-1)
