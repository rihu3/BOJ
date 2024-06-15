#include <iostream>
#include <cmath>
using namespace std;

int main()
{	
	double a, b, h;
	cin >> a >> b >> h;
	if (a == b) { // 원기둥
		cout << -1;
		return 0;
	}
	if( a > b) swap(a, b); // a < b
	double x = (a * h) / (b - a);
	double powBig = pow(x + h, 2) + b * b;
	double powSmall = x * x + a * a;
	cout << fixed;
	cout.precision(7);
	cout << (powBig - powSmall) * acos(-1);
	return 0;
}
