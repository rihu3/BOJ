#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x;
	cin >> x;
	cout << fixed;
	cout.precision(15);
	cout << x * x * sqrt(3) / 4;

	return 0;
}