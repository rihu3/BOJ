#include <stdio.h>

int main()
{    
    int x,y;
    scanf("%d", &x );
    scanf("%d", &y );
    
    if(x > 0){
        if(y > 0) printf("%d",1);
        else printf("%d", 4);
    }
    else{
        if(y>0) printf("%d",2);
        else printf("%d",3);
    }
    return 0;
}