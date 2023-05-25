#include <stdio.h>

int main(){
    
    int score;
    scanf("%d", &score);
    
    
    if(score >= 90) printf("%s","A");
    else if(score >= 80) printf("%s","B");
    else if(score >= 70) printf("%s","C");
    else if(score >= 60) printf("%s","D");
    else printf("%s","F");
}