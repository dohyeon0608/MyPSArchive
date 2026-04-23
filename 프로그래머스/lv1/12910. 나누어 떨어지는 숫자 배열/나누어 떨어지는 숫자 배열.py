def solution(arr, divisor):
    x = 0
    answer = []
    for i in range(len(arr)):
        if arr[i] % divisor == 0:
            answer.append(arr[i])
            x = 1
    if x == 0:
        answer.append(-1)
    else:
        answer.sort()
    return answer