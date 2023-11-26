numbers =list(map(int, input().split(' ')))

ascending = sorted(numbers)
descending = list(reversed(ascending))

if numbers == ascending:
  print('ascending')
elif numbers == descending:
  print('descending')
else:
  print('mixed')