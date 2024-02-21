#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
	int n;
	cin >> n;
	long long arr[10001] = {0,};
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		arr[num]++;
	}

	for (int k = 1; k <= 10000; k++)
			for (int j = 0; j < arr[k]; j++)
				cout << k << "\n";
	return 0;
}