#include <stdio.h>
#include <string.h>

int pow(int x, int n);

int main(void) {
	int r = 31, M = 1234567891;
	int len;
	scanf("%d", &len);
	char str[5];
	scanf("%s", str);
	int hash = 0;
	for (int i = 0; i < len; i++)
	{
		hash += (str[i] - 'a' + 1) * pow(r, i);
	}
	printf("%d", hash);
	return 0;
}

int pow(int x, int n)
{
	int value = 1;
	for (int i = 0; i < n; i++)
	{
		value *= x;
	}
	return value;
}