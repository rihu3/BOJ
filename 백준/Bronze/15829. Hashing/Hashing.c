#include <stdio.h>

int main(void) {
	int len;
    long long M = 1234567891;
	scanf("%d", &len);
	char str[51];
	scanf("%s", str);
	unsigned long long hash = 0;
	long long r = 1;
	for (int i = 0; i < len; i++)
	{
		hash = (hash + (str[i] - 'a' + 1) * r) % M;
		r = (r * 31) % M;
	}
	printf("%lld", hash);

	return 0;
}

