C = int(input())

while C > 0:
    test = list(map(int, input().split(" ")))
    N = test[0]
    test = test[1:]
    avg = sum(test) / N

    over = 0
    for s in test:
        if s > avg:
            over += 1

    print("%.3f%%" %(over/N*100))
    C -= 1