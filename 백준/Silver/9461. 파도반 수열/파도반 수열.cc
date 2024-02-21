#include <iostream>
using namespace std;

int main()
{
	long long int P[100];
	P[0] = 1;
	P[1] = 1;
	P[2] = 1;
	for (int i = 3; i < 100; i++)
	{
		P[i] = P[i - 3] + P[i - 2];
	}
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int n;
		cin >> n;
		cout << P[n - 1] << endl;
	}
	return 0;
}