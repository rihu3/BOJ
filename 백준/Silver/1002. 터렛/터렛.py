import math

class Coordinate:
  def __init__(self,x,y,r):
    self.x = x
    self.y = y
    self.r = r

result = []

n = int(input()) 
for _ in range(n):
  x1, y1, r1, x2, y2, r2 = map(int, input().split(' '))
  A = Coordinate(x1, y1, r1)
  B = Coordinate(x2, y2, r2)
  
  XYdist = math.sqrt((A.x - B.x)**2 + (A.y - B.y)**2)  # 두 점 사이의 거리
  
  if XYdist == 0: 
    if A.r == B.r : # 두 원이 일치할 때
      print(-1)
    else: 
      print(0)
  else:
    if A.r + B.r == XYdist or abs(A.r - B.r) == XYdist:
      print(1)
    elif (abs(A.r - B.r) < XYdist) and (XYdist < A.r + B.r):
      print(2)
    else:
      print(0)


