S = input()
last_idx = len(S)-1

result = 1

for d in range((last_idx // 2)+1):
    a = d
    b = last_idx - d  # a번과 b번은 서로 대칭이다.  a a+1 a+2 ... b-2 b-1 b

    if S[a] != S[b]:
        result = 0
        break

print(result)
