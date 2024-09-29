#include <iostream>
using namespace std;

int main()
{
	int w, h;
	cin >> w;
	cin >> h;

	cout << min(w, h) * 50;
	return 0;
}