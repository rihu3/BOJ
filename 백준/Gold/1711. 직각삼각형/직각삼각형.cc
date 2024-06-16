#include <iostream>
using namespace std;

class Point {
public:
	long long x;
	long long y;
};

long long Pow_length(Point A, Point B)
{
	return (A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y);
}

bool checkRAngle(long long a, long long b, long long c)
{
	if (a > c) swap(a, c);
	if (b > c) swap(b, c);
	return a + b == c;
}
int main() {
	int n;
	cin >> n;
	Point points[1500];
	for (int i = 0; i < n; i++)
	{
		cin >> points[i].x >> points[i].y;
	}
	int cnt = 0;
	for (int j = 0; j < n; j++)
	{
		for (int m = j + 1; m < n; m++)
		{
			for (int z = m + 1; z < n; z++)
			{
				long long a = Pow_length(points[j], points[m]);
				long long b = Pow_length(points[j], points[z]);
				long long c = Pow_length(points[m], points[z]);
				if (checkRAngle(a, b, c))
					cnt++;
			}
		}
	}
	cout << cnt;
	return 0;
}
