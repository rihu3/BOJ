#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		int check = 0;
		for (int j = 0; j < s.length(); j++)
		{
			if (s[j] == '(')
			{
				check++;
			}
			else if (s[j] == ')')
			{
				check--;
			}
			if (check < 0)
			{
				cout << "NO" << endl;
				break;
			}
		}
		if (check == 0)
		{
			cout << "YES" << endl;
		}
		else if (check > 0)
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}
