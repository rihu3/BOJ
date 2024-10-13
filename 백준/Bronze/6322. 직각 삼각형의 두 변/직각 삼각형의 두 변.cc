#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	int i = 1;
	while (true)
	{
		int a, b, c;
		cin >> a >> b >> c;
		float result;
		char side = 'n';
		if (a == 0 && b == 0 && c == 0)
			break;
		else if (a == -1)
		{
			side = 'a';
			result = c * c - b * b;
		}
		else if (b == -1)
		{
			side = 'b';
			result = c * c - a * a;
		}
		else
		{
			side = 'c';
			result = a * a + b * b;
		}

		cout << "Triangle #" << i << endl;
		i++;
		cout << fixed;
		cout.precision(3);
		if (result <= 0)
			cout << "Impossible." << endl << endl;
		else
			cout << side << " = " << sqrt(result) << endl << endl;
	}
	return 0;
}