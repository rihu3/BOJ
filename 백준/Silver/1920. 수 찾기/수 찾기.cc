#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	int A[100000];
	for (int i = 0; i < n; i++)
		cin >> A[i];

	sort(A, A + n);

	int m;
	cin >> m;
	for (int j = 0; j < m; j++)
	{
		int x;
		cin >> x;
		int result = 0;
		int start = 0;
		int end = n - 1;
		int mid;
		while (end - start >= 0) {
			mid = (start + end) / 2;

			if (A[mid] == x){
				result = 1;
				break;
			} else if (A[mid] > x) {
				end = mid - 1;
			} else
				start = mid + 1;
		}
		cout << result << '\n';
	}
	return 0;
}
