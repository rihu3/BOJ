#include <stdio.h>

int main()
{
	int A, B, C;
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	int Multi = A * B * C;
	int result[10] = { 0, };
	while(Multi != 0)
	{
		int k = Multi % 10;
		Multi /= 10;
		result[k]++;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", result[i]);
	}
}

