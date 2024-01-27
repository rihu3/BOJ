#include <stdio.h>

int main()
{
	int nums[28];
	for (int i = 0; i < 28; i++)
	{
		scanf("%d", &nums[i]);
	}
	for (int k = 1; k <= 30; k++)
	{
		int flag = 0;
		for (int j = 0; j < 28; j++)
		{
			if (nums[j] == k)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			printf("%d\n", k);
		}
	}
	return 0;
}