n = int(input())  # 배열의 크기
A, B, C, D = [], [], [], []

# 네 개의 리스트 입력 받기
for _ in range(n):
    a, b, c, d = map(int, input().split())
    A.append(a)
    B.append(b)
    C.append(c)
    D.append(d)

# AB, CD 리스트 생성 및 정렬
AB = sorted(a + b for a in A for b in B)
CD = sorted(c + d for c in C for d in D)

result = 0
lp, rp = 0, n**2 - 1

# 합이 0이 되는 경우 찾기
while lp < n**2 and rp >= 0:
    current_sum = AB[lp] + CD[rp]
    if current_sum > 0:
        rp -= 1
    elif current_sum < 0:
        lp += 1
    else:
        AB_same, CD_same = 1, 1
        while lp < n**2 - 1 and AB[lp] == AB[lp+1]:
            AB_same += 1
            lp += 1
        while rp > 0 and CD[rp] == CD[rp-1]:
            CD_same += 1
            rp -= 1
        result += AB_same * CD_same
        rp -= 1
        lp += 1

print(result)
