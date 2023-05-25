#include <stdio.h>

int main()
{
    int N;
    int max = -1000000, min = 1000000;
    scanf("%d", &N);
    for(int i = 0; i < N ; i++){
        int num;
        scanf("%d", &num);
        if(num >= max) max = num;
        if(num <= min) min = num;
    }
    printf("%d %d",min,max);
}