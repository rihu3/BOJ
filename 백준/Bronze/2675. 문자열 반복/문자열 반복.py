n = int(input())

for _ in range(n):
  number, words = input().split()
  for word in words:
    print(word*int(number), end = '')
  print()

