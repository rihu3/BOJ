#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		double a;
		cin >> a;
		double b = a / 6;
		cout << fixed;
		cout.precision(10);

		cout << b << endl;
	}
	return 0;
}