#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 1000

int main(void)
{
	int N;
	scanf("%d", &N);
	float score[MAX] = { 0 };
	int best = 0;
	int i;
	for (i = 0; i < N; i++) {
		int a;
		scanf("%d", &a);
		score[i] = a;
		if (a > best) best = a;
	}

	for (i = 0; i < N; i++) {
		score[i] = score[i] / best * 100;
	}
	float sum=0;
	for (i = 0; i < N; i++) {
		sum += score[i];
	}
	float aver = (sum / N);
	printf("%f", aver);  return 0;
}