N = int(input())
w = 2 * N - 1

for k in range(N - 1, -N, -1):
    abs_k = abs(k)

    print(' ' * abs_k, end='')
    print('*' * (w - 2 * abs_k), end='')

    if k != -N + 1:
        print()
