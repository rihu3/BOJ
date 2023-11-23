n, k = map(int, input().split(' '))

def factorial(Num):
  result = 1
  while(Num != 0):
    result *= Num
    Num -= 1
  return result
    
n -= 1
k -= 1

answer =  factorial(n) / ( factorial(n-k) * factorial(k) )
print(int(answer))
