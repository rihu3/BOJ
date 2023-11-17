import math

inputData = list(map(int, input().split(' ')))
up = inputData[0]
down = inputData[1]
height = inputData[2]
day = 1;

if(up < height):
  height -= up
  num = math.ceil(height/(up - down))
  day += num

print(day)