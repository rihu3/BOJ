#include <iostream>
#include <string>
using namespace std;


int main()
{
	long long A, B, C;
	cin >> A >> B >> C;
	long long multi = A * B * C;
	int count[10] = { 0, };
	while (multi > 0)
	{
		count[multi % 10]++;
		multi /= 10;
	}
	for (int i = 0; i < 10; i++)
		cout << count[i] << "\n";

    return 0;
}
