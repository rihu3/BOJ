#include <iostream>
#include <string>
using namespace std;

long long factorial(int n)
{
	if (n == 0)
		return 1;
	else
		return n * factorial(n - 1);
}

int main()
{
	int n;
	cin >> n;
	
	cout << factorial(n) << endl;
	return 0;
}