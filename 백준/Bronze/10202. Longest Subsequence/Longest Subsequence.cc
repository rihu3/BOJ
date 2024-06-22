#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		char x;
		int cnt = 0;
		int MaxCnt = 0;
		for (int j = 0; j < num; j++)
		{
			cin >> x;
			if (x == 'X') {
				cnt++;
				if (cnt > MaxCnt)
				{
					MaxCnt = cnt;
				}
			}
			else {
				cnt = 0;
			}
		}
		cout << "The longest contiguous subsequence of X's is of length ";
		cout << MaxCnt << endl;
	}
	return 0;
}