words_candidate = input().split(' ')
result = 0
for word in words_candidate:
    if word != '': result += 1
print(result)