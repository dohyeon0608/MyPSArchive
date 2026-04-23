def solution(arr):
    p = 0
    r = len(arr)
    for i in range(r):
        p += arr[i]
    an = p / len(arr)
    answer = an
    return answer