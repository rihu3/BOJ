#include <iostream>
using namespace std;
#define station 10
int main()
{
	int people = 0;
	int max = 0;
	for (int i = 0; i < station; i++)
	{
		int in, out;
		cin >> out >> in;
		people = people - out + in;
		if (people > max) max = people;
	}
	cout << max;
	return 0;
}