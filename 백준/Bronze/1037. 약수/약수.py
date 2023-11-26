n = int(input())
numbers =list(map(int, input().split(' ')))
numbers.sort()

result = numbers[0] * numbers[n-1]

print(result)