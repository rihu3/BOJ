#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <algorithm>
#define LIMIT 1000000
using namespace std;

int main() {

	int n;
	scanf("%d", &n);
	
	int dp[LIMIT + 2] = {};
	dp[1] = 0;
	for (int i = 2; i < LIMIT + 1; i++) {
		dp[i] = dp[i - 1] + 1;
		if (i % 3 == 0) {
			dp[i] = min(dp[i], dp[i / 3]+1);
		}
		if (i % 2 == 0) {
			dp[i] = min(dp[i], dp[i / 2]+ 1);
		}
	}

	printf("%d", dp[n]);
}
