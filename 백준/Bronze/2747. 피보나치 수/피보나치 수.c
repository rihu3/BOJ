#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int N;
	scanf("%d", &N);
	
	int a[46] = { 0 };

	a[0] = 0;
	a[1] = 1;
	for (int i = 2; i <= 45; i++) {
		a[i] = a[i - 1] + a[i - 2];
	}
	printf("%d", a[N]);



	return 0;
}