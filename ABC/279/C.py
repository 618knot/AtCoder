import numpy as np

H, W = map(int, input().split())
S = [list(input()) for _ in range(H)]
T = [list(input()) for _ in range(H)]


S = np.array(S)
T = np.array(T)
S = S.T
T = T.T
S = S.tolist()
T = T.tolist()

S = ["".join(S[i]) for i in range(W)]
T = ["".join(T[i]) for i in range(W)]
print(sorted(S))
print(sorted(T))


if len(np.setdiff1d(S,T)) == 0:
    print("Yes")
else:
    print("No")

