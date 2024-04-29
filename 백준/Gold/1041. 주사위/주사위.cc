#include <iostream>
#include <algorithm>
using namespace std;

int n;
int dice[6];
int min1 = 51, min2 = 101, min3 = 151;
long long result = 0;

int main() {
	cin >> n;
	for (int t = 0; t < 6; t++)
	{
		cin >> dice[t];
	}
	for (int i = 0; i < 6; i++)
	{
		min1 = min(min1, dice[i]);
		for (int j = i + 1; j < 6; j++)
		{
			if (i + j == 5) continue;
			min2 = min(min2, dice[i] + dice[j]);
			for (int k = j + 1; k < 6; k++)
			{
				if (j + k == 5 || i + k == 5) continue;
				min3 = min(min3, dice[i] + dice[j] + dice[k]);
			}
		}
	}

	if (n == 1)
	{
		int biggest = 0;
		for (int i = 0; i < 6; i++)
		{
			biggest = max(biggest, dice[i]);
			result += dice[i];
		}
		result -= biggest;
	}
	else
	{
		result += min1 * ((long long)(n - 2) * (5*n - 6));
		result += min2 * (8 * n - 12);
		result += min3 * 4;
	}
	cout << result;
	return 0;
}

