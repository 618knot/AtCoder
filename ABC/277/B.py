N = int(input())
S = [input() for _ in range(N)]

firstCh = ['H', 'D', 'C', 'S']
secondCh = ['A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K']

def main():
    for i in S:
        if i[0] not in firstCh:
            return 'No'
        if i[1] not in secondCh:
            return 'No'
    

    for i in range(len(S)):
        for j in range(i + 1, len(S)):
            if S[i] == S[j]:
                return 'No'
    
    return 'Yes'

print(main())
    