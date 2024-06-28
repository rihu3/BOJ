#include <iostream>
using namespace std;

int main()
{
	int money;
	int result;
	while (true)
	{
		cin >> money;
		if (money == 0) break;
		
		if (money <= 1000000)
			result = money;
		else if (money <= 5000000)
			result = money * 0.9;
		else 
			result = money * 0.8;

		cout << result << endl;
	}
	return 0;
}