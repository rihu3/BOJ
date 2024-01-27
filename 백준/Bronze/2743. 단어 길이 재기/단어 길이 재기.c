#include <stdio.h>

int main()
{
	char S[100];
	scanf("%s", S);
	int len = 0;
	while (S[len] != '\0')
	{
		len++;
	}
	printf("%d", len);
		return 0;
}
