#include <iostream>
#include <algorithm>
using namespace std;

int value[100001];

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> value[i];
	int lp = 0;
	int rp = n - 1;
	int Min = abs(value[lp] + value[rp]);
	int result = value[lp] + value[rp];
	while (lp < rp)
	{
		int sum = value[lp] + value[rp];
		if (abs(sum) < Min)
		{
			Min = abs(sum);
			result = value[lp] + value[rp];
		}
		if (value[lp] + value[rp] >= 0)
			rp -= 1;
		else
			lp += 1;
	}
		cout << result;
	return 0;
}