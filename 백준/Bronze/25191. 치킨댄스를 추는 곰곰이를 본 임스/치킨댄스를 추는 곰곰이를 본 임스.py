chickenAmount = int(input())              # 치킨 집에 있는 치킨의 총 개수
coke, beer = map(int, input().split(' ')) # 집에 있는 콜라와 맥주의 개수

if (coke//2 + beer) <= chickenAmount:
  print(coke//2 + beer)
else:
  print(chickenAmount)