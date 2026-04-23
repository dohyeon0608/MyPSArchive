def solution(priorities, location):
    answer = 0
    waitList = priorities[:]
    waitIndex = [i for i in range(len(priorities))]
    while(len(waitList)!=0):
        J = waitList.pop(0)
        index = waitIndex.pop(0)
        if max(waitList)>J if len(waitList) != 0 else False:
            waitList.append(J)
            waitIndex.append(index)
        else:
            answer+=1
            if index == location: 
                return answer
    return answer