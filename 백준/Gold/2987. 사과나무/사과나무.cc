#include <iostream>
#include <algorithm>
using namespace std;

class Point
{
public:
	int x;
	int y;
};

Point p1, p2, p3;

float Area(Point p1, Point p2, Point p3) // 삼각형의 넓이
{
	return abs((p1.x*(p2.y - p3.y) + p2.x*(p3.y - p1.y) + p3.x*(p1.y - p2.y)) / 2.0);
}

bool CheckIn(Point p) // 삼각형 내부에 있는지 확인
{	
	float A = Area(p1, p2, p3);
	float A1 = Area(p, p2, p3);
	float A2 = Area(p1, p, p3);
	float A3 = Area(p1, p2, p);
	return A == A1 + A2 + A3;
}

int main()
{
	cin >> p1.x >> p1.y;
	cin >> p2.x >> p2.y;
	cin >> p3.x >> p3.y;
	
	cout << fixed;
	cout.precision(1);
	cout << Area(p1, p2, p3) << endl;

	int T;
	cin >> T;
	int cnt = 0;
	for (int i = 0; i < T; i++)
	{
		Point Q;
		cin >> Q.x >> Q.y;
		if (CheckIn(Q)) cnt++;
	}
	cout << cnt;
	
	return 0;
}