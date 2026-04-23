def solution(s):
    list1 = list(s)
    if len(s) % 2 == 1:
        answer = list1[int(len(s) / 2)]
    elif len(s) % 2 == 0:
        answer = list1[int(len(s) / 2) - 1] + list1[int(len(s) / 2)]
    return answer