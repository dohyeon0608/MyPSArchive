def solution(s):
    answer = True
    if not (len(s) == 4 or len(s) == 6):
        answer = False
    try:
        int(s)
    except Exception as ex:
        answer = False
    return answer