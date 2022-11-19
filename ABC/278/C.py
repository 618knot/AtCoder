N, Q = map(int, input().split())
X = [list(map(int, input().split())) for _ in range(Q)]

follow = [set() for _ in range(N)]

for i in range(Q):
    if X[i][0] == 1:
        follow[X[i][1] - 1].add(X[i][2] - 1)
    elif X[i][0] == 2:
        if X[i][2] - 1 in follow[X[i][1] - 1]:
            follow[X[i][1] - 1].remove(X[i][2] - 1)
    elif X[i][0] == 3:
        if X[i][2] - 1 in follow[X[i][1] - 1] and X[i][1] - 1 in follow[X[i][2] - 1]:
            print("Yes")
        else:
            print("No")
