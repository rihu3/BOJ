num = int(input())
result = 1;
if num == 0:
    print(1)
else:
    while num > 1:
        result *= num
        num -= 1
    print(result)