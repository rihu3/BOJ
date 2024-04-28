#include <iostream>
using namespace std;

int prefix_sum[100000];

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	cin >> prefix_sum[0];
	for (int i = 1; i < n; i++)
	{
		int num;
		cin >> num;
		prefix_sum[i] = prefix_sum[i - 1] + num;
	}
	for (int j = 0; j < m; j++)
	{
		int start, end;
		cin >> start >> end;
		if (start == 1) {
			cout << prefix_sum[end - 1] << '\n';
		}
		else
		{
			cout << prefix_sum[end - 1] - prefix_sum[start - 2] << '\n';
		}
	}
	return 0;
}
