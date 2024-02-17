#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int P;
    cin >> P;
    if (N < 5)
        cout << P;
    else if (N < 10)
    {
        if (P < 500) cout << 0;
        else cout << P - 500;
    }
    else if (N < 15)
    {
        if (P < 500) cout << 0;
        else if (P * 0.9 < P - 500) cout << P * 0.9;
        else cout << P - 500;
    }
    else if (N < 20)
    {
        if (P < 2000) cout << 0;
        else if (P * 0.9 < P - 2000) cout << P * 0.9;
        else cout << P - 2000;
    }
    else
    {
        if (P < 2000) cout << 0;
		else if (P * 0.75 < P - 2000) cout << P * 0.75;
        else cout << P - 2000;
    }
    return 0;
}