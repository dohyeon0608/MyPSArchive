def solution(n):
    answer = ''
    for i in range(n):
        if i % 2 == 0:
            a = '수'
        else :
            a = '박'
        answer += a
    return answer