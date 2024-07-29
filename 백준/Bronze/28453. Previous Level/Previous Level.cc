#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int level;
	for (int i = 0; i < n; i++)
	{
		cin >> level;
		if (level == 300) cout << 1 << endl;
		else if(level >= 275) cout << 2 << endl;
		else if(level >= 250) cout << 3 << endl;
		else cout << 4 << endl;
	}

	return 0;
}