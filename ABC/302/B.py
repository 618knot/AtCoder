h, w = map(int, input().split())
s = [input() for _ in range(h)]

s_list = []

for i in range(h):
    if "s" in s[i]:
        s_list.append([i, s[i].index("s")])

for s_i in s_list:
    
    y = s_i[0]
    x = s_i[1]

    # 左
    if x < 5:
        pass
    else:
        if s[y][:x][::-1][:5] == "nuke":
            for i in range(5):
                print(y + 1, x - i + 1)
                
            break
    
    # 右
    if w - 1 - x < 4:
        pass
    else:
        if s[y][x + 1:x + 5] == "nuke":
            for i in range(5):
                print(y + 1, x + i + 1)
                
            break

    # 上
    if y < 5:
        pass
    else:
        ex_nuke = ""
        for i in range(4):
            ex_nuke += s[y - 1 - i][x]

        if ex_nuke == "nuke":
            for i in range(5):
                print(y - i + 1, x + 1)
                
            break

    # 下
    if h - 1 - y < 4:
        pass
    else:
        ex_nuke = ""
        for i in range(4):
            ex_nuke += s[y + 1 + i][x]
        if ex_nuke == "nuke":
            for i in range(5):
                print(y + i + 1, x + 1)
                
            break

    # 左上
    if y < 5 or x < 5:
        pass
    else:
        ex_nuke = ""
        for i in range(4):
            ex_nuke += s[y - 1 - i][x - 1 - i]
        if ex_nuke == "nuke":
            for i in range(5):
                print(y - i + 1, x - i + 1)
                
            break

    # 右上
    if y < 5 or w - 1 - x < 4:
        pass
    else:
        ex_nuke = ""
        for i in range(4):
            ex_nuke += s[y - 1 - i][x + 1 + i]
        if ex_nuke == "nuke":
            for i in range(5):
                print(y - i + 1, x + i + 1)
                
            break

    # 右下
    if h - 1 - y < 4 or w - 1 - x < 4:
        pass
    else:
        ex_nuke = ""
        for i in range(4):
            ex_nuke += s[y + 1 + i][x + 1 + i]
        if ex_nuke == "nuke":
            for i in range(5):
                print(y + i + 1, x + i + 1)
            break

    # 左下
    if h - 1 - y < 4 or x < 5:
        pass
    else:
        ex_nuke = ""
        for i in range(4):
            ex_nuke += s[y + 1 + i][x - 1 - i]
        if ex_nuke == "nuke":
            for i in range(5):
                print(y + i + 1, x - i + 1)
            
            break

    # 左上
    if y < 5 or x < 5:
        pass
    else:
        ex_nuke = ""
        for i in range(4):
            ex_nuke += s[y + 1 + i][x - 1 - i]
        if ex_nuke == "nuke":
            for i in range(5):
                print(y - i + 1, x - i + 1)
            
            break
