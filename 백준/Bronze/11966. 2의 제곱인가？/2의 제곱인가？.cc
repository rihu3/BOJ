#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n == 1) {
		cout << 1;
		return 0;
	}
	int x = 2;
	while (true)
	{
		if (x < n)
			x *= 2;
		else if (x > n)
		{
			cout << 0;
			return 0;
		}
		else if (x == n)
		{
			cout << 1;
			return 0;
		}
	}
}