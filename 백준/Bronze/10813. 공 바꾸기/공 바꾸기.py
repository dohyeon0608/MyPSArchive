N, M = map(int, input().split(' '))
baskets = [i+1 for i in range(N)]

while M > 0:
    im1, jm1 = map(lambda x: int(x)-1, input().split(' ')) # minus 1
    temp = baskets[im1]
    baskets[im1] = baskets[jm1]
    baskets[jm1] = temp
    M -= 1

print(' '.join(map(str, baskets)))
