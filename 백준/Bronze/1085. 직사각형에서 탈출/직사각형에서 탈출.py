x,y,w,h=list(map(int, input().split(" ")))
d=[x,y,abs(w-x),abs(h-y)]
print(min(d))