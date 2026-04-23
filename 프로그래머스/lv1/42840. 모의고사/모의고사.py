def solution(answers):
    answer = []
    inpt = [[1,2,3,4,5], [2,1,2,3,2,4,2,5], [3,3,1,1,2,2,4,4,5,5]]
    p = [0,0,0]
    l = len(answers)
    for i in range(l):
        for j in range(3):
            if inpt[j][i%len(inpt[j])] == answers[i%len(answers)]:
                p[j]+=1
    for i in range(3):
        if max(p)==p[i]:
            answer.append(i+1)
    return answer