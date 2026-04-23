import sys

T = int(sys.stdin.readline().rstrip())
while T > 0:
    print(sum(map(int, sys.stdin.readline().rstrip().split(" "))))
    T -= 1