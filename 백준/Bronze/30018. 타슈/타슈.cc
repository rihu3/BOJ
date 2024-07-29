#include <iostream>
using namespace std;

int main()
{
	int n;
	int a[101], b[101];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int sum = 0;
	for (int j = 0; j < n; j++)
	{
		cin >> b[j];
		int dif = a[j] - b[j];
		if (dif < 0) dif = -1 * dif;
		sum += dif;
	}
	cout << sum / 2 << endl;
	return 0;
}