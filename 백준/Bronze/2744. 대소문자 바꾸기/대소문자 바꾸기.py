words = input()
result = []

for i in range(len(words)):
    n = ord(words[i])
    if n >= 65 and n <= 90:
        result.append(chr(n + 32))
    else:
        result.append(chr(n - 32))

print(''.join(result))