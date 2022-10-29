import decimal
X, K = map(int, input().split())

def main(X, K):
    leng = len(str(abs(X)))
    if K - 1 >= leng:
        return 0
    
    X = X * 10 ** -leng
    ans = decimal.Decimal(str(X))
    for i in range(K):
        ans = ans.quantize(decimal.Decimal(str(10 ** -(leng - i - 1))), rounding= decimal.ROUND_HALF_UP)

    return int(ans * 10 ** leng)

print(main(X, K))
