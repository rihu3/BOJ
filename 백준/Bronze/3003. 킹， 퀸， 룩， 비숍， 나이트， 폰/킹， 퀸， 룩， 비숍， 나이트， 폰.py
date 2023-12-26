number = list(map(int, input().split()))
result = [0,0,0,0,0,0]
if(number[0] != 1):
  result[0] = 1-number[0]
if(number[1] != 1):
  result[1] = 1-number[1]
if(number[2] != 2):
  result[2] = 2 - number[2]
if(number[3] != 2):
  result[3] = 2 - number[3]
if(number[4] != 2):
  result[4] = 2 - number[4]
if(number[5] != 8):
  result[5] = 8 - number[5]

for i in range(6):
  print(result[i], end = " ")