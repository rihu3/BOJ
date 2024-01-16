#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int p = 0;

    if (N % 5 == 0) {
        printf("%d", N / 5);
    }
    else {
        while (N >= 3) {
            N -= 3;
            p += 1;
            if (N % 5 == 0) {
                printf("%d", p + (N / 5));
                return 0;
            }
        }

        if (N == 1 || N == 2) {
            printf("-1"); // 3개와 5개짜리로 구성이 불가능할 때
        }
        else {
            printf("%d", p); // 3개 짜리로만 구성
        }
    }

    return 0;
}