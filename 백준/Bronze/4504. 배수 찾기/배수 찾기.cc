#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	while (true)
	{
		int test;
		cin >> test;
		if (test == 0)
			break;

		if (test % n == 0)
			cout << test << " is a multiple of " << n << ".\n";
		else
			cout << test << " is NOT a multiple of " << n << ".\n"; 
	}
	return 0;
}