import math

class Coordinate:
  def __init__(self,x,y):
    self.x = x
    self.y = y

def dist(N, M): # 두 점의 길이 함수
  return math.sqrt( (N.x- M.x)**2 + (N.y-M.y)**2 )

x1, y1, x2, y2, x3, y3 = map(int, input().split(' '))

A = Coordinate(x1, y1)
B = Coordinate(x2, y2)
C = Coordinate(x3, y3)

if (B.y-A.y)*(C.x-B.x) == (B.x-A.x)*(C.y-B.y): # 세 점이 한 직선 위에 있을 때
  print(-1)

else:
  perimeter = [] # 둘레들을 저장할 리스트
  perimeter.append(2*(dist(A,B) + dist(A,C))) # AB, AC를 변으로 하는 평행사변형 둘레
  perimeter.append(2*(dist(A,B) + dist(B,C))) # AB, BC를 변으로 하는 평행사변형 둘레
  perimeter.append(2*(dist(A,C) + dist(B,C))) # AC, BC를 변으로 하는 평행사변형 둘레

  result = max(perimeter) - min(perimeter)
  print(result)
  


  
  



