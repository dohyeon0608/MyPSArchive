N, B = input().split(' ')

B = int(B)
D = len(N)

result = 0

i = D - 1

def get_number(s):
    code = ord(s)
    if code >= 48 and code <= 57:
        return code - 48
    elif code >= 65 and code <= 90:
        return code - 55
    else:
        return -1

for n in N:
    number = get_number(n)
    result += number * (B ** i)

    i -= 1

print(result)
