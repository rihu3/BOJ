#include <stdio.h>

int main()
{
	char S[100];
	scanf("%s", S);
	int idx = 0;
	while (S[idx] != '\0')
	{
		if (S[idx] <= 'Z')
		{
			printf("%c", S[idx] + 32);
		}
		else
		{
			printf("%c", S[idx] - 32);
		}
		idx++;
	}
		return 0;
}
