#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a == b and b == c and c == a) cout << 10000 + a * 1000;
	else {
		if ( a == b ) cout << 1000 + a * 100;
		else if ( a == c ) cout << 1000 + a * 100;
		else if ( b == c ) cout << 1000 + b * 100;
		else {
			int big;
			big = a > b ? a : b;
			big = big > c ? big : c;
			cout << big * 100;
		}
	}
	return 0;
}