#include <stdio.h>

int main() {
    int N, S;
    
    while (scanf("%d %d", &N, &S) != EOF) {
        int x = S / (N+1);
        printf("%d\n", x);
    }
    
    return 0;
}
