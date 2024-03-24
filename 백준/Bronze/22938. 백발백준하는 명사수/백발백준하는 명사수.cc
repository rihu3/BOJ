#include <iostream>
#include <cmath>
using namespace std;

class Target {
public:
    int x;
    int y;
    int r;
};
int main()
{
    Target target1;
    Target target2;
    cin >> target1.x >> target1.y >> target1.r;
    cin >> target2.x >> target2.y >> target2.r;

    long long powDist = pow(target1.x - target2.x, 2) + pow(target1.y - target2.y, 2);
    long long powR = pow(target1.r + target2.r, 2);
    if(powDist < powR)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
    return 0;
}
