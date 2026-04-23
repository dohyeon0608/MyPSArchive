def solution(numbers):
    answer = []
    l = len(numbers)
    for i in range(l):
        for j in range(1, l):
            if(i == j): continue
            value = numbers[i] + numbers[j]
            if not(value in answer): answer.append(value)
    answer.sort()
    return answer