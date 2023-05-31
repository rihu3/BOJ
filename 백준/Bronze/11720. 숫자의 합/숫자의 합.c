#include <stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    char num_array[100] = {0};
    scanf("%s",&num_array);
    int sum =0;
    int i=0;
    for(i;i<N;i++)
    {
        int num = num_array[i]-'0';
        sum += num;
    }
    printf("%d",sum);
    return 0;
}