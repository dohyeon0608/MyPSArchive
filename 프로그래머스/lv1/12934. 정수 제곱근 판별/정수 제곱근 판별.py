import math
def solution(n):
    answer = math.sqrt(n)
    d = str(answer).split(".")
    if d[1]=='0':
        return ((answer+1)**2)
    else:
        return -1