#include <stdio.h>

int main()
{
    int max=0;
    int maxidx;
    int i = 0;
    for(i;i<9;i++)
    {
        int num;
        scanf("%d",&num);
        if(num > max){
          max = num;
          maxidx = i+1;
        } 
    }
    printf("%d\n%d",max,maxidx);
    return 0;
}