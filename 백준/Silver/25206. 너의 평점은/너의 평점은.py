dataset = {'A+': 4.5, 'A0': 4.0, 'B+': 3.5, 'B0': 3.0, 'C+': 2.5, 'C0': 2.0, 'D+': 1.5, 'D0': 1.0, 'F': 0.0}
total_score = 0
sum_of_multiple = 0

for i in range(20):
    name, score, rank = input().split(' ')

    if rank == 'P':
        continue

    score = float(score)
    total_score += score

    subject_score = dataset[rank]
    sum_of_multiple += subject_score * score

print(sum_of_multiple/total_score)
