#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int v, e, f;
		cin >> v >> e;
		f = 2 - v + e;
		cout << f << "\n";
	}
	return 0;
}