#include <iostream>
using namespace std;

int main()
{
	int hour, minute;
	int delay;
	cin >> hour >> minute;
	cin >> delay;

	minute += delay;
	hour += minute / 60;
	minute %= 60;
	while (hour >= 24)
	{
		hour -= 24;
	}
	cout << hour << " " << minute << "\n";
	return 0;
}