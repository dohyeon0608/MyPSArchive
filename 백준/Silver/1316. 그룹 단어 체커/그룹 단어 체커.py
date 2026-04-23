n = int(input())
count = 0

while n > 0:
  word = input()
  chr_set = set()
  prev = ''
  is_group = True
  for c in word:
    if (c in chr_set) and (prev != c):
      is_group = False
    chr_set.add(c)
    prev = c
  if is_group:
    count += 1
  n -= 1

print(count)