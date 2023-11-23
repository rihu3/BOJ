Max = int(input()) # 한번에 최대로 부를 수 있는 수
for i in range(1,Max+1):
  if (i < ( 30 % (i+1) ) or ( 30 % (i+1) ) == 0) :
    print(i)
