def solution(x, n):
    answer = []
    i = 1
    for i in range(n):
        answer.append(x * (i+1))
    return answer