n1,n2=list(map(int, input().split(' ')))
print('==' if n1 == n2 else ('>' if n1 > n2 else '<'))