#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        int num = 1;
        for (int j = 0; j < b; j++)
        {
            num *= a;
            while (num >= 10)
            {
                num %= 10;
            }
        }
        if (num == 0)
            cout << 10 << endl;
        else
            cout << num << endl;
    }
    return 0;
}
