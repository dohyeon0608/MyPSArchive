def solution(s):
    answer = ''
    a = ''
    c = 0
    l = list(s)
    for i in range(len(l)):
        b = l[i]
        if b == ' ':
            a += ' '
            c = 1
        else:
            if c%2 == 0:
                a += b.upper()
            else:
                a += b.lower()
        c += 1
    answer = a
    return answer