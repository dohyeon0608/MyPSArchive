from math import ceil

def solution(progresses, speeds):
    answer = []
    soyos = []
    N = len(speeds)
    
    # 각 작업마다 소요되는 일 계산
    for i in range(N):
        soyos.append( ceil( (100 - progresses[i]) / speeds[i] ) ) # x>=(100-b)/a
    
    day = 0 # 현재 진행 일자
    total_funcs = 0 # 누적 배포된 기능
    
    while total_funcs < N:
        funcs = 0 # 해당 일자에 개발된 기능 개수
        day = soyos[total_funcs]
        for i in range(total_funcs, N):
            if soyos[i] <= day: # 해당 기능의 소요일이 앞의 기능의 소요일보다 적을 때
                funcs += 1
                total_funcs += 1
            else: break # 이후 소요일은 현재 진행 일자보다 무조건 큼.
        answer.append(funcs)
    
    return answer