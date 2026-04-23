S = input()
result = 0

dataset = [
    ['A', 'B', 'C'],
    ['D', 'E', 'F'],
    ['G', 'H', 'I'],
    ['J', 'K', 'L'],
    ['M', 'N', 'O'],
    ['P', 'Q', 'R', 'S'],
    ['T', 'U', 'V'],
    ['W', 'X', 'Y', 'Z']
    ]

for c in S:
    for i, l in enumerate(dataset):
        if c in l:
            result += 3 + i

print(result)