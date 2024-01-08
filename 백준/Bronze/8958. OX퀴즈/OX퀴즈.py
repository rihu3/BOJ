N = int(input())
for _ in range(N):
    testCase = list(input())
    score = 1
    totalScore = 0
    for char in testCase:
        if char == 'O':
            totalScore += score
            score += 1
        else:
            score = 1
    print(totalScore)