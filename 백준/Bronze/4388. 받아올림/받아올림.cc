#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int Min(int a, int b)
{
	return a < b ? a : b;
}
int Max(int a, int b)
{
	return a > b ? a : b;
}
int main()
{
	while (true)
	{
		string x, y;
		cin >> x >> y;
		if (x == "0" and y == "0") break;
		reverse(x.begin(), x.end());
		reverse(y.begin(), y.end());
		int count = 0;
		int cash = 0;
		for (int i = 0; i < Min(x.length(), y.length()); i++)
		{
			int a, b;
			a = x[i] - '0';
			b = y[i] - '0';
			if (a + b + cash >= 10)
			{
				count++;
				cash = 1;
			}
			else
				cash = 0;
		}
		if (x.length() > y.length())
		{
			for (int i = y.length(); i < x.length(); i++)
			{
				if (x[i] - '0' + cash >= 10)
				{
					count++;
					cash = 1;
				}
				else
					cash = 0;
			}
		}
		else if (x.length() < y.length())
		{
			for (int i = x.length(); i < y.length(); i++)
			{
				if (y[i] - '0' + cash >= 10)
				{
					count++;
					cash = 1;
				}
				else
					cash = 0;
			}
		}	
		cout << count << endl;
	}
	return 0;
}