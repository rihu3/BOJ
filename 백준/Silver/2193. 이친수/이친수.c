#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 90

int main(void)
{
	int N;
	scanf("%d", &N);

	long long num[MAX] = { 0 };
	num[0] = 1;
	num[1] = 1;
	for (int i = 2; i < N; i++) {
		num[i] = num[i - 2] + num[i - 1];
	}
	printf("%lld", num[N - 1]);

	return 0;
}