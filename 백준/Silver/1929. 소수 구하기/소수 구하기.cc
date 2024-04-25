#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    if (m <= 2)
    {
        m = 3;
        cout << 2 << endl;
    }
    if (m % 2 == 0) m++;

    for (int i = m; i <= n; i += 2)
    {
        bool isPrime = true;
        int limit = (int)sqrt(i);
        for (int j = 3; j <= limit; j += 2)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime) cout << i << '\n';
    }
    return 0;
}
