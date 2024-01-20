#include <stdio.h>

int main(void) {
	int N;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		int num = i;
		int sum = 0;
		sum += num;
		while (num != 0) {
			sum += num % 10;
			num /= 10;
		}
		if (sum == N) {
			printf("%d", i);
			N = 0;
		}
	}
	if (N != 0) {
		printf("0");
	}
}