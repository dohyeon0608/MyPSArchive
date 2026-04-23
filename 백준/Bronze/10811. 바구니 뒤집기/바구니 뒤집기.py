N, M = map(int, input().split(' '))
baskets = [i + 1 for i in range(N)]

while M > 0:
    im1, jm1 = map(lambda x: int(x) - 1, input().split(' '))  # minus 1
    for d in range(((jm1 - im1) // 2)+1):
        a = im1 + d
        b = jm1 - d  # a번과 b번은 서로 대칭이다.  a a+1 a+2 ... b-2 b-1 b

        temp = baskets[a]
        baskets[a] = baskets[b]
        baskets[b] = temp

    M -= 1

print(' '.join(map(str, baskets)))
