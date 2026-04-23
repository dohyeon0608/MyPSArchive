def solution(absolutes, signs):
    answer = 0
    for i in range(len(signs)):
        answer += (1 if signs[i] else -1) * absolutes[i]
    return answer