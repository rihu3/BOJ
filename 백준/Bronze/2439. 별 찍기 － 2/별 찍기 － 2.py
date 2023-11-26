n = int(input())

for i in range(n):
  blank = n-i-1
  star = i+1
  for _ in range(blank):
    print(" ", end = "")
  for _ in range(star):
    print("*", end = "")
  print()