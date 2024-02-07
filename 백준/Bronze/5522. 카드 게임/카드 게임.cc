#include <iostream>
using namespace std;

int main()
{
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		int A;
		cin >> A;
		sum += A;
	}
	cout << sum;
	return 0;
}
