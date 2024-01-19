T = int(input())

ary = [[1,0],[0,1]]
for idx in range(2,41):
  ary.append([ary[idx-1][1],(ary[idx-1][0]+ary[idx-1][1])])

for _ in range(T):
  num = int(input())
  print(ary[num][0], end = " ")
  print(ary[num][1])

