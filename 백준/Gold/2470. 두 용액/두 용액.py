num = int(input())
value = list(map(int, input().split(' ')))
value.sort()

lp = 0
rp = num-1
Min = abs(value[lp] + value[rp])
result = [value[lp], value[rp]]

while(lp < rp):
    sum = value[lp] + value[rp]
    if abs(sum) < Min:
        Min = abs(sum)
        result = [value[lp], value[rp]]
    if (value[lp] + value[rp]) >= 0:
        rp -= 1
    else:
        lp += 1

print(result[0],result[1])
