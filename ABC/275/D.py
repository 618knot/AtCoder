from functools import lru_cache


@lru_cache
def function(f2):
    if f2 == 0:
        return 1

    return function(f2 // 2) + function(f2 // 3)
f2 = int(input())

print(function(f2))
        


