A = list(map(int, input().split()))
tmp = (A[0] * A[1] * A[2]) - (A[3] * A[4] * A[5])
print(tmp % 998244353)