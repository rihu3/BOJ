#include <iostream>
using namespace std;
const static int MOD = 1000000007;

int main() {
	int n;
	cin >> n;
	int n1 = 1, n2 = 1, n3;
	for (int i = 2; i < n; i++) {
		n3 = ((n1 % MOD) + (n2 % MOD)) % MOD;
		n1 = n2;
		n2 = n3;
	}
	cout << n3 << " " << n - 2;
	return 0;
}