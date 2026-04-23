N = int(input())
arr = input().split(" ")
v = input()
result = 0

for i in arr:
    if i == v:
        result += 1

print(result)