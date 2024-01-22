#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct point {
    int x;
    int y;
};

int compare(const void* a, const void* b) {
    struct point* p1 = (struct point*)a;
    struct point* p2 = (struct point*)b;
    
    if (p1->x != p2->x) {
        return p1->x - p2->x;
    } else {
        return p1->y - p2->y;
    }
}

int main(void) {
    struct point ary[100000];
    int N;
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &ary[i].x, &ary[i].y);
    }
    
    qsort(ary, N, sizeof(struct point), compare);
    
    for (int i = 0; i < N; i++) {
        printf("%d %d\n", ary[i].x, ary[i].y);
    }
    
    return 0;
}
