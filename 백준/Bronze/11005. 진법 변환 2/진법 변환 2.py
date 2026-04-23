N, B = map(int, input().split(" ")) # 입력 받기

result = []

while N != 0 :
    mod = N % B # 나머지 구하기
    result.append(mod if mod < 10 else chr(mod + 65 - 10)) # 문자 저장
    N = N // B # 몫 저장

for i in range(len(result)-1, -1, -1): # 숫자 출력
    print(result[i], end='')

