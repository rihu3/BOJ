#include <iostream>
using namespace std;

int main()
{
	int away[5], home[5];
	int awayscore = 0, homescore = 0;
	for (int i = 0; i < 5; i++)
		cin >> away[i];
	
	for (int i = 0; i < 5; i++)
		cin >> home[i];

	awayscore = away[0] * 6 + away[1] * 3 + away[2] * 2 + away[3] * 1 + away[4] * 2;
	homescore = home[0] * 6 + home[1] * 3 + home[2] * 2 + home[3] * 1 + home[4] * 2;

	cout << awayscore << " " << homescore;
	return 0;
}