hour, min = map(int,input().split(' '))

min = hour*60 + min

min = min - 45
if(min < 0):
  min += 24 * 60

hour = min // 60
min = min % 60

print(hour, end = ' ')
print(min)