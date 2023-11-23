#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int winner[1002] = { 0,0,1,0,1 };
	int n;
	scanf("%d", &n);
	for (int i = 5; i <= n; i++)
	{
		if (winner[i - 1] == 0 || winner[i - 3] == 0 || winner[i - 4] == 0)
		{
			winner[i] = 1;
		}
		else
			winner[i] = 0;
	}
	
	if (winner[n] == 0) printf("CY");
	else printf("SK");
	
	
	return 0;
}
