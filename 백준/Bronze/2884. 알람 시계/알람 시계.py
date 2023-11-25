import sys
hour, min = map(int,sys.stdin.readline().split())

if min < 45:
  hour -= 1
  min += 15
  if hour < 0:
    hour = 23

else: min -= 45

print(hour, min)
