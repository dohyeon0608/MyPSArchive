arr = ["" for i in range(15)]
for i in range(5):
    l = list(input())
    for j in range(len(l)):
        arr[j] += l[j]
        
print("".join(arr))