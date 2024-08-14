import math
a, b = map(int, input().split())

tmp = math.ceil(a//b)
if a % b == 0:
    print(tmp)
else:
    print(tmp + 1)

