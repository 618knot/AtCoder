A, B = map(int, input().split())

import math
count = 0
g = 1
ans = 0
ans2 = 0

while(True):
    
    ans = B * count + A / math.sqrt(g)
    ans = ans2

    if count != 0 and ans < ans2:
        print(ans)
        exit()
    
    g += 1 
    count += 1 