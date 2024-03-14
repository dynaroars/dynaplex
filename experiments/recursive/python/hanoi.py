def hanoi(n: int , source: int, destination: int, auxiliary: int) -> None:
    if n==1:
        return
    hanoi(n-1, source, auxiliary, destination)
    hanoi(n-1, auxiliary, destination, source)
    return