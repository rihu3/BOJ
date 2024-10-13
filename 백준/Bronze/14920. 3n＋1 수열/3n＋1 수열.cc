#include <iostream>
using namespace std;

int seq(int n)
{
	if (n % 2 == 0)
		return n / 2;
	else
		return 3 * n + 1;
}

int main()
{
	int num, idx;
	cin >> num;
	for (int i = 1; true; i++)
	{
		if (num == 1)
		{
			cout << i;
			break;
		}
		num = seq(num);
	}
	return 0;
}