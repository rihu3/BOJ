#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	int sum = 0;
	for (int i = 0; i < T; i++)
	{
		int k;
		cin >> k;
		sum += k;
	}

	cout << sum;
	return 0;

}