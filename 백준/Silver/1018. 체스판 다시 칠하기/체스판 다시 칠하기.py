N, M = list(map(int, input().split(' ')))
board = []
for i in range(N):
    board.append(input())

result = N * M

# type1 WBWB
# type2 BWBW
def type1(n, m):
    return 'B' if (n%2 == 0)^(m%2 == 0) else 'W'

ableN = N - 7
ableM = M - 7

for startN in range(ableN):
    for startM in range(ableM):
        stop = False
        type1_square = 0
        type2_square = 0
        for n in range(startN, startN+8):
            for m in range(startM, startM+8):
                if(type1(n, m) != board[n][m]): type1_square += 1
                else: type2_square += 1

                if min(type1_square, type2_square) > result: # 최적화
                    stop = True
                    break
            if stop: continue
        if stop: continue
        result = min(result, type1_square, type2_square)

print(result)