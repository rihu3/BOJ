#include <stdio.h>

int main(void) {
	int T; // 테스트의 개수
	scanf("%d", &T);
	for (int i = 0; i < T; i++) 
	{
		int k, n; // 층, 호
		scanf("%d", &k);
		scanf("%d", &n);
		int arr[15][15] = {0,};
		int num = 1;
		for (int j = 0; j < 15; j++)
		{
			arr[0][j] = num;
			num++;
		}
		for (int k = 1; k < 15; k++)
		{
			for (int z = 0; z < 15; z++)
			{
				for (int m = 0; m <= z; m++)
				{
					arr[k][z] += arr[k - 1][m];
				}
			}
		}
	printf("%d\n", arr[k][n - 1]);
	}
}		