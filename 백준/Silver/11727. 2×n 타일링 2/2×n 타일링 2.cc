#include <iostream>
using namespace std;
#define MOD 10007

int dp[1001];

int main() {

	int n;
	cin >> n;
	dp[1] = 1;
	dp[2] = 3;
	for (int i = 3; i <= n; i++)
	{
		dp[i] = (dp[i - 1] % MOD + 2 * dp[i - 2] % MOD) % MOD;
	}
	cout << dp[n] << endl;
}
