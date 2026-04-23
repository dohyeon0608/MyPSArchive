# 큰 수라니... 파이썬 출격!

def main():
    while True:
        n = int(input())
        if n == 0: break

        n -= 1

        if n == 0:
            print("{ }")
            continue

        subset = []
        power = 0
        temp_n = n
        
        # 비트마스킹 ㄱㄱ
        while temp_n > 0:
            if temp_n % 2 == 1:
                subset.append(3 ** power)
            temp_n //= 2
            power += 1

        else:
            print("{ ", end='')
            print(", ".join(map(str, subset)),end='')
            print(" }")

main()