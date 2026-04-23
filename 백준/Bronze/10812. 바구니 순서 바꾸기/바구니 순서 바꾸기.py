N, M = map(int, input().split(' '))
baskets = [i+1 for i in range(N)]

while M > 0:
    im1, jm1, km1 = map(lambda x: int(x)-1, input().split(' ')) # minus 1
    result_list = baskets[km1:(jm1+1)] + baskets[im1:km1]

    for i in range(im1, jm1+1):
        baskets[i] = result_list[i-im1]

    M -= 1

print(' '.join(map(str, baskets)))
