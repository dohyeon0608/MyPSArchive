X = int(input())
N = int(input())
bill = 0

while N > 0:
    price, count = list(map(int, input().split(" ")))
    bill += price * count
    N -= 1

if(bill == X):
    print('Yes')
else:
    print('No')