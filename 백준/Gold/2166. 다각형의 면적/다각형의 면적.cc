#include <iostream>
#include <cmath>
using namespace std;

class Point {
public:
	long double x;
	long double y;
};
long double Size(Point point1, Point point2, Point point3) {
	return (point1.x * point2.y + point2.x * point3.y + point3.x * point1.y 
		- point2.x * point1.y - point3.x * point2.y - point1.x * point3.y) / 2;
}
int main()
{
	int n;
	cin >> n;
	Point points[10000];
	long double result = 0;
	for (int i = 0; i < n; i++) {
		cin >> points[i].x >> points[i].y;
	}
	for (int j = 1; j < n-1; j++) {
		result += Size(points[0], points[j], points[j + 1]);
	}
	result = round(result * 10) / 10;
	cout << fixed;
	cout.precision(1);
	cout << abs(result);
	return 0;
}