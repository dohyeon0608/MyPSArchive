def solution(arr):
    i = 1
    arr.insert(0, 'a')
    answer = []
    # [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    for i in range(len(arr)):
        if arr[i] != arr[i-1]:
            answer.append(arr[i])
    answer.remove('a')
    return answer