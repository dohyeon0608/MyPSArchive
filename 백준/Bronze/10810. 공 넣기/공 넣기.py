N, M = list(map(int, input().split(' ')))

baskets = [0 for i in range(N)]

while M > 0:
    i, j, k = list(map(int, input().split(' ')))
    for n in range(i-1, j):
        ball_n = baskets[n]
        baskets[n] = k
    M -= 1
    
for n in baskets:
    print(n, end=' ')