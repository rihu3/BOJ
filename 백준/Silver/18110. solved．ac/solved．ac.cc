#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int ary[300001];
int main() {
	int n;
	cin >> n;
	if (n == 0) cout << 0;	
	else {
		for (int i = 0; i < n; i++) cin >> ary[i];
		sort(ary, ary + n);
		float except = round(n * 0.15);
		float sum = 0;
		for (int j = except; j < n - except; j++)
		{
			sum += ary[j];
		}
		int average = round(sum / (n - (2 * except)));
		cout << average;
	}
	return 0;
}
