def relu(x):
    return x if x > 0 else 0

T = int(input())

while True:
    if T == 0:
        break

    N = int(input())
    
    a, b, c, p = [0, 0, 0, 0]

    flag = True
    
    for i in range(N):
        ai, bi, ci, pi = list(map(int, input().split(' ')))
        req = relu(ai - a) + relu(bi - b) + relu(ci - c) + 1
        if req <= (pi - p):
            a, b, c, p = [max(ai, a), max(bi, b), max(ci, c), (p + req)]
        else:
            flag = False
    
    print("YES" if flag else "NO")

    T -= 1