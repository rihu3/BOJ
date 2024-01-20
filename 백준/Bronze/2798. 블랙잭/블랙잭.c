#include <stdio.h>

int main(void) {
	int N, M;
	scanf("%d %d", &N, &M);
	int arr[100];
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	int result = 0;
	for (int j = 0; j < N; j++)
	{
		for (int k = j + 1; k < N; k++)
		{
			for (int m = k + 1; m < N; m++)
			{
				int sum = arr[j] + arr[k] + arr[m];
				if (sum > result && sum <= M)
				{
					result = sum;
				}
			}
		}
	}
	printf("%d", result);
	return 0;
}