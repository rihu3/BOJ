#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int cmp(string a, string b)
{
	if (a.length() == b.length())
	{
		return a < b;
	}
	else
	{
		return a.length() < b.length();
	}
}

int main()
{
	int n;
	cin >> n;
	string words[20000];
	for (int i = 0; i < n; i++)
	{
		cin >> words[i];
	}
	sort(words, words + n, cmp);

	for (int i = 0; i < n; i++)
	{
		if (words[i] == words[i - 1])
		{
			continue;
		}
		cout << words[i] << endl;
	}
	return 0;
}
