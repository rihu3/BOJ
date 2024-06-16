#include <iostream>
#include <cmath>
using namespace std;
#define PI 3.141592653589793

int main() {
	cout << fixed;
	cout.precision(2);
	double x1, y1, x2, y2, x3, y3;
	while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3) {
		double powSide1 = pow(x2 - x1, 2) + pow(y2 - y1, 2);
		double powSide2 = pow(x3 - x2, 2) + pow(y3 - y2, 2);
		double powSide3 = pow(x1 - x3, 2) + pow(y1 - y3, 2);
		double triArea = ((x1 * y2 + x2 * y3 + x3 * y1) - (y1 * x2 + y2 * x3 + y3 * x1)) / 2;
		double powRadius = (powSide1 * powSide2 * powSide3) / (16 * pow(triArea, 2));
		double CircleArea =2 * PI * sqrt(powRadius); // 2pi * r
		cout << CircleArea << "\n";
	}
	return 0;
}
