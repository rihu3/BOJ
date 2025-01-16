#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int rotate(int n, int digit)
{
	int unit = n % 10;
	return (n/10) + (unit * pow(10, digit-1));
}

int main() {
	int n;
	cin >> n;
	int digit = to_string(n).size(); // n의 자리수
	long long cnt = 0;
	for (int i = 0; i < digit; i++)
	{
		n = rotate(n, digit);
		cnt += n;
	}
	cout << cnt;

	return 0;
}