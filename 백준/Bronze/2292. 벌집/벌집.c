#include <stdio.h>

int main(void) {
	int ary[20000] = { 1, };
	for (int i = 1; i < 20000; i++)
	{
		ary[i] = ary[i - 1] + (i * 6);
	}
	int N;
	scanf("%d", &N);
	int idx = 0;
	while (N > ary[idx])
	{
		idx++;
	}
	printf("%d", idx + 1);	
	return 0;
}