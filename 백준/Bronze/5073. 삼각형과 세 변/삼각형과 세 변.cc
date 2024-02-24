#include <iostream>
using namespace std;

int Max(int a, int b, int c)
{
	if (a >= b and a >= c) return a;
	else if (b >= a and b >= c) return b;
	else return c;
}
int main()
{
	while (true)
	{
		int a, b, c;
		cin >> a >> b >> c;
		if (a == 0 and b == 0 and c == 0)
			break;
		if (Max(a, b, c) >= a + b + c - Max(a, b, c))
			cout << "Invalid" << endl;
		else if (a == b and b == c and c == a) 
			cout << "Equilateral" << endl;
		else if (a == b or b == c or c == a) 
			cout << "Isosceles" << endl;
		else cout << "Scalene" << endl;
	}
	return 0;
}