H, M = map(int, input().split())

def wrongTime(H, M):
    stH = str(H).zfill(2)
    stM = str(M).zfill(2)

    wrH = int(stH[0] + stM[0])
    wrM = int(stH[1] + stM[1])

    if 0 <= wrH <= 23 and 0 <= wrM <= 59:
        return stH + " " + stM 
    else:
        return -1


while True:
    ans = wrongTime(H, M)
    if ans != -1:
        print(ans)
        exit()
    
    M += 1
    if M >= 60:
        M %= 60
        H += 1
        H %= 24

