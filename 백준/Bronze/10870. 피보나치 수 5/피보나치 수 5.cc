#include <iostream>
using namespace std;

int main()
{
	int Fib[21];
	Fib[0] = 0;
	Fib[1] = 1;
	for (int i = 2; i < 21; i++)
	{
		Fib[i] = Fib[i - 1] + Fib[i - 2];
	}
	int n;
	cin >> n;
	cout << Fib[n] << endl;
	return 0;
}