#include <iostream>
#include <string>
using namespace std;
static long long MOD = 1000000009;

int main() {
	string name;
	cin >> name;
	long long result = 1;
	bool Dsame = false;
	bool Csame = false;
	for (int i = 0; i < name.length(); i++)
	{
		if (name[i] == 'd')
		{
			if (Dsame == true)
			{
				result *= 9;
			}
			else
			{
				result *= 10;
			}
			Dsame = true;
			Csame = false;
		}
		else if (name[i] == 'c')
		{
			if (Csame == true)
			{
				result *= 25;
			}
			else
			{
				result *= 26;
			}
			Csame = true;
			Dsame = false;
		}
		result %= MOD;
	}
	cout << result;
	return 0;
}
