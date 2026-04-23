# cache
facs = [0 for i in range(30)]

def fac(n):
    if facs[n] != 0:
        return facs[n]
    else:
        result = 1
        for i in range(n):
            result *= (i+1)
        facs[n] = result
        return result
    
def nCr(n, r):
    return (fac(n) // fac(n-r)) // fac(r)

    
T = int(input())

for i in range(T):
    M, N = list(map(int, input().split(" ")))
    print(nCr(N, M))