#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int N;
	scanf("%d", &N);
	int P = 1;

	for (int i = 1; i <= N; i++) {

		P *= i;

	}
	printf("%d", P);



	return 0;
}