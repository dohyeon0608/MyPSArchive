def main():
    N = int(input())
    result = sum([N * i + i for i in range(1, N)])
    print(result)

main()