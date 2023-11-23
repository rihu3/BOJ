#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	int n;
	scanf("%d", &n);
	if (n % 2 == 0)
	{
		printf("%s", "CY");
	}
	else
	{
		printf("%s", "SK");
	}
	
	return 0;
}
