#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <algorithm>
#define MAX 1000 
using namespace std;

int main() {

	int n;
	scanf("%d", &n);
	int rgb[MAX+2][3];

	for (int i = 0; i < n; i++) {
		int r, g, b;
		scanf("%d %d %d", &r, &g, &b);
		rgb[i][0] = r;
		rgb[i][1] = g;
		rgb[i][2] = b;
	}

	int dp[MAX + 2][3];
	dp[0][0] = rgb[0][0];
	dp[0][1] = rgb[0][1];
	dp[0][2] = rgb[0][2];
	for (int i = 1; i < n; i++) {
		dp[i][0] = min(dp[i-1][1], dp[i-1][2]) + rgb[i][0];
		dp[i][1] = min(dp[i-1][2], dp[i-1][0]) + rgb[i][1];
		dp[i][2] = min(dp[i-1][0], dp[i-1][1]) + rgb[i][2];
	}
	int minnum = min(min(dp[n-1][0], dp[n-1][1]), dp[n-1][2]);

	printf("%d", minnum);
}
