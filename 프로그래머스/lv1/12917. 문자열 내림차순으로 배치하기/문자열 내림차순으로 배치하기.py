def solution(s):
    answer=''
    a = list(s)
    answer = ''.join(sorted(s, reverse=True))
    return answer