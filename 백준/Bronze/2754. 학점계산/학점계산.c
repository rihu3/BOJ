#include <stdio.h>

int main()
{
	char str[3];
	float score = 4.0;
	scanf("%s", str);

	if (str[0] == 'F')
	{
		printf("0.0\n");
		return 0;
	}

	score -= str[0] - 'A';
	if (str[1] == '+') score += 0.3;
	if (str[1] == '-') score -= 0.3;

	printf("%.1f\n", score);
	return 0;
}
