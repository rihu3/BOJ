#include <stdio.h>

int max(int a[])
{
    int maxnum = 0;
    for(int i = 0; i < 10; i++)
    {
        if(a[i] > maxnum)
        {
            maxnum = a[i];
        }
    }
    return maxnum;
}

int main(void)
{
    int n;
    int num[10] = {0,0,0,0,0,0,0,0,0,0};
    scanf("%d", &n);
    while(n > 0)
    {
        int k = n % 10;
        num[k] += 1;
        n /= 10;
    }

    num[6] = (num[6] + num[9] + 1) / 2; // 6과 9는 대체 가능하므로, 두 숫자의 카운트를 합칩니다.
    num[9] = 0; // 6과 9를 합친 후, 9의 카운트는 0으로 설정합니다.

    printf("%d", max(num));
    return 0;
}