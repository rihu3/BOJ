import math

class Circle:
  def __init__(self,x,y,r):
    self.x = x
    self.y = y
    self.r = r

n = int(input()) 
for _ in range(n):
  x1, y1, r1, x2, y2, r2 = map(int, input().split(' '))
  A = Circle(x1, y1, r1)
  B = Circle(x2, y2, r2)
  
  XYdist = math.sqrt((A.x - B.x)**2 + (A.y - B.y)**2)  # 두 점 사이의 거리
  
  if XYdist == 0:  # 두 원의 중심이 같음 때
    if A.r == B.r : # 두 원이 일치 => 교점이 무수히 많다
      print(-1)     
    else: # => 교점이 없음
      print(0) 
  else:
    if A.r + B.r == XYdist or abs(A.r - B.r) == XYdist: # 두 원이 외접하거나 내접 => 교점 : 1
      print(1)
    elif (abs(A.r - B.r) < XYdist) and (XYdist < A.r + B.r): # 두 원이 두 점을 지남 (삼각형 생성 조건) => 교점 : 2
      print(2)
    else: # => 교점이 없음
      print(0)

...
