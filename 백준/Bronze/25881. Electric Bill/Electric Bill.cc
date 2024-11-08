#include <iostream>
#include <string>
using namespace std;

int main()
{
	int base, add;
	cin >> base >> add;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int consume;
		cin >> consume;
		if (consume <= 1000) {
			cout << consume << " " << consume * base << endl;
		}
		else {
			cout << consume << " " << 1000 * base + (consume - 1000) * add << endl;
		}
	}
	return 0;
}