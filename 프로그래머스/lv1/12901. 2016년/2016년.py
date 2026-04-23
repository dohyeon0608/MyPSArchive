def solution(a, b):
    d = 0
    month = {1:0, 2:31, 3:29, 4:31, 5:30, 6:31, 7:30, 8:31, 9:31, 10:30, 11:31, 12:30}
    for i in range(a):
        d += month[i+1]
    ds = d + b
    today = ds%7
    wd = ['THU', 'FRI', 'SAT', 'SUN', 'MON', 'TUE', 'WED']
    answer = wd[today]
    return answer