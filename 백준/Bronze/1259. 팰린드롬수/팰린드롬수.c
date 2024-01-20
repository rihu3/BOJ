#include <stdio.h>

int main(void) {
	while (1)
	{
		char num[5];
		scanf("%s", num);
		if (num[0] == '0') break;
		int idx = 0;
		while (1) // 길이 확인
		{
			if (num[idx] == NULL) break;
			idx++;
		}
		if (idx == 1)
		{
			printf("yes\n");
			continue;
		}
		for (int i = 0; i < idx / 2; i++)
		{
			if (num[i] != num[idx - i - 1])
			{
				printf("no\n");
				break;
			}
			if ((i == (idx / 2) - 1)) printf("yes\n");
		}

	}
}