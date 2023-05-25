#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int ab = a * b;
	int GCD, LCM;

	if (a < b) 
	{
		int z;
		z = a;
		a = b;
		b = z;
	}

	while (b != 0) 
	{
		int z;
		z = a % b;
		a = b;
		b = z;
	}
	GCD = a;
	LCM = ab / GCD;

	printf("%d %d", GCD, LCM);
	return 0;
}