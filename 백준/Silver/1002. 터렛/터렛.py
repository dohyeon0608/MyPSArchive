results = []
n = int(input())
for i in range(n):
    l = list(map(int, input().split(' ')))
    x1 = l[0]; y1 = l[1]; r1 = l[2]; x2 = l[3]; y2 = l[4]; r2 = l[5]
    result = 0
    if(x1 == x2 and y1 == y2 and r1 == 0 and r2 == 0): result = 1
    A = 2 * (x2 - x1)
    B = 2 * (y2 - y1)
    C = r2**2 - r1**2 - x2**2 + x1**2 - y2**2 + y1**2
    if(A == 0 and B == 0): 
        result = -1 if(C == 0) else 0
    else:
        D2 = (x1*A + y1*B + C)**2 / (A**2 + B**2)
        result = 1 if D2 == r1**2 else (0 if D2 > r1**2 else 2)
    results.append(str(result))
print('\n'.join(results))