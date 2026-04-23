nun = list(map(int, input().split(" ")))
same_nun = None
same_count = 1
max_nun = nun[0]

arr = [[0, 1], [0, 2], [1, 2]]

for x, y in arr:
    if nun[x] == nun[y]:
        same_nun = nun[x]
        same_count += 1
    else:
        max_nun = nun[y] if nun[y] > max_nun else max_nun

if same_count == 1:
    price = max_nun * 100
elif same_count == 2:
    price = 1000 + same_nun * 100
else:
    price = 10000 + same_nun * 1000

print(price)