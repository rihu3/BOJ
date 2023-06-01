#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 10000

int main()
{
	int N, X;
	int A[MAX] = { 0 };

	scanf("%d %d", &N, &X);
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		int num;
		scanf("%d", &num);
		if (num < X)
		{
			A[cnt] = num;
			cnt++;
		}
	}
	for (int j = 0; j < cnt; j++) {
		printf("%d ", A[j]);
	}



	return 0;
}