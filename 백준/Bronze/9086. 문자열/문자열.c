#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	char s[1001];

	scanf("%d", &n);

	while (n--)
	{
		scanf("%s", s);

		printf("%c%c\n", s[0], s[strlen(s)-1]);
	}

	return 0;
}
