def compress(lst: list[int]) -> list[int]:
    if len(lst) < 2:
        return lst
    else:
        head, *tail = lst
        compressed_tail = compress(tail)
        if compressed_tail and head == compressed_tail[0]:
            return compressed_tail
        else:
            return [head] + compressed_tail
