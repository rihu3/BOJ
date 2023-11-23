#include <stdio.h>

int isPrime(int num) {
    if (num < 2)
        return 0;
    
    for (int i = 2; i <= num-1; i++) {
        if (num % i == 0)
            return 0;
    }
    
    return 1;
}

int main() {
    int n, count = 0;
     scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        
        if (isPrime(num))
            count++;
    }
    printf("%d",count);
    
    return 0;
}
