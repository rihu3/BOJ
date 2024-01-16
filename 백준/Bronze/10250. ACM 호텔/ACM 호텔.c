#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        int H, W, N;
        scanf("%d %d %d", &H, &W, &N);
        int floor = N % H;
        int room = (N / H) + 1;
        if (floor == 0) {
            floor = H;
            room -= 1;
        }
        printf("%d%02d\n", floor, room);
    }
    return 0;
}