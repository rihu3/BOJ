#include <stdio.h>
#include <string.h>

int main(void) {
	while (1)
	{
		char num[5];
		scanf("%s", num);
		if (num[0] == '0') break; // 0이면 종료
		int len = strlen(num);
		int flag = 1; //true
		for (int i = 0; i < len / 2; i++)
		{
			if (num[i] != num[len - i - 1])
			{
				flag = 0; //false
				break;
			}
		}
		if (flag == 1) printf("yes\n");
		else printf("no\n");
	}
}