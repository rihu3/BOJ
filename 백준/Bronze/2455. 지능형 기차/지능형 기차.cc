#include <iostream>
using namespace std;
#define try 4
int main()
{
	int people = 0;
	int max = 0;
	for (int i = 0; i < try; i++)
	{
		int in, out;
		cin >> out >> in;
		people = people - out + in;
		if (people > max) max = people;
	}
	cout << max;
	return 0;
}