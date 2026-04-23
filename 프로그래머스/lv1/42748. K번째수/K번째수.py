def solution(array, commands):
    answer = []
    for i in range(len(commands)):
        r = []
        for j in range(commands[i][0]-1, commands[i][1]):
            r.append(array[j])
        r.sort()
        answer.append(r[commands[i][2]-1])
    return answer