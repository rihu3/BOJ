#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int line = 1;
	for (int i = 1; n > i; i++)
	{
		line++;
		n -= i;
	}
	if (line % 2 == 0)
	{
		cout << n << "/" << (line + 1) - n;
	}
	else
	{
		cout << (line + 1) - n << "/" << n;
	}
	return 0;
}


