S = input() 

ans = 0

for i in S:
    if i == "w":
        ans += 2
    else:
        ans += 1

print(ans)