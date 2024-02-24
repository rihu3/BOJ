#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double R;
	cin >> R;
	cout << fixed;
	cout.precision(6);
	cout << R * R * M_PI << "\n";
	cout << R * R * 2.0 << "\n";
	return 0;
}