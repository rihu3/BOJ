N, M = map(int, input().split())
numbers = list(map(int, input().split()))
count = 0
for i in range(N):
  sum = 0
  for j in range(i,N):
    sum += numbers[j]
    if sum > M:
      break
    if sum == M:
      count += 1
print(count)