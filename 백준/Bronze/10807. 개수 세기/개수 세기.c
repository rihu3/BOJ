#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	int nums[100];
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &nums[i]);
	}
	int v;
	scanf("%d", &v);
	int cnt = 0;
	for (int j = 0; j < N; j++)
	{
		if (nums[j] == v)
			cnt++;
	}
	printf("%d", cnt);
	return 0;
}