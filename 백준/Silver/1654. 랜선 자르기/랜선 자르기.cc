#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int k, n, lan[10000];
	long long max = 0;
	cin >> k >> n;
	for (int i = 0; i < k; i++)
	{
		cin >> lan[i];
		if (max < lan[i])
		{
			max = lan[i];
		}
	}
	
	long long left = 1;
	long long right = max;
	int result;
	while (left <= right)
	{
		long long mid = (left + right) / 2;
		int cnt = 0;
		for (int i = 0; i < k; i++)
		{
			cnt += lan[i] / mid;
		}
		if (cnt >= n)
		{
			left = mid+1;
			result = mid;
		}
		else
		{
			right = mid-1;
		}
	}
	cout << result;
	return 0;
}