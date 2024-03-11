#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int n;
		cin >> n;
		cout << n / 25 << " ";
		n %= 25;
		cout << n / 10 << " ";
		n %= 10;
		cout << n / 5 << " ";
		n %= 5;
		cout << n << endl;
	}
	return 0;
}