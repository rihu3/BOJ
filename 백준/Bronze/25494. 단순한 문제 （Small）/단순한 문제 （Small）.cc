#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int a, b, c;
        int ans = 0;
        cin >> a >> b >> c;
        for (int x = 1; x <= a; x++)
        {
            for (int y = 1; y <= b; y++)
            {
                for (int z = 1; z <= c; z++)
                {
                    if (x % y == y % z && y % z == z % x)
                    {
						ans++;
					}
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
