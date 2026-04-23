def solution(s):
    log = ''; answer = ''
    for i in range(int(len(s) / 3 + 1)):
        n = -1; l = 0
        log += str(s[i*3:(i+1)*3])
        if(log.startswith('zero')) : n = 0; l = 4
        if(log.startswith('one')) : n = 1; l = 3
        if(log.startswith('two')) : n = 2; l = 3
        if(log.startswith('three')) : n = 3; l = 5
        if(log.startswith('four')) : n = 4; l = 4
        if(log.startswith('five')) : n = 5; l = 4
        if(log.startswith('six')) : n = 6; l = 3
        if(log.startswith('seven')) : n = 7; l = 5
        if(log.startswith('eight')) : n = 8; l = 5
        if(log.startswith('nine')) : n = 9; l = 4
        if(n != -1): 
            log = log[l:]
            answer += str(n)
        for j in log:
            if(j.isnumeric()): 
                log = log[1:]
                answer += j
            else: break
    return int(answer)