import math

gameTry = int(input())     #플레이할 게임의 판 수
games = []
gameIdx = 0
Min = None
for _ in range(gameTry):
  games.append(list(map(int, input().split(' '))))

for i in range(gameTry):
  endNum = games[i][0]
  callNum = games[i][1]
  winStart = (endNum-1)%(callNum+1)
  winNum = callNum + 1
  if(Min == None):
    Min = math.ceil((endNum-winStart)/winNum)
    gameIdx = 1
  else:
    if(Min > math.ceil((endNum-winStart)/winNum)):
      Min = math.ceil((endNum-winStart)/winNum)
      gameIdx = i + 1

Min *= 2

print(gameIdx, Min)

