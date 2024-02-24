#include <iostream>
using namespace std;

int T(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
		sum += i;
	return sum;
}

int W(int n)
{
	int result = 0;
	for (int i = 1; i <= n; i++)
	{
		result += i * T(i + 1);
	}
	return result;
}
int main()
{
	int Try;
	cin >> Try;
	for (int i = 0; i < Try; i++)
	{
		int x;
		cin >> x;
		cout << W(x) << endl;
	}
	return 0;
}