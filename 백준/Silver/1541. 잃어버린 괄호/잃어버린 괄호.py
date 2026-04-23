# 문제 핵심 - '-' 사이에 괄호치면 최솟값으로 만들 수 있다.
eqt = list(map(lambda x: x.split('+'), input().split('-')))
eqt = list(map(lambda x: sum(map(int, x)), eqt))
result = eqt[0]
for i in range(1, len(eqt)):
    result -= eqt[i]
print(result)