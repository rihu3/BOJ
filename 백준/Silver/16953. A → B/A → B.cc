#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;
    int cnt = 1;
    while (A < B)
    {
        if (B % 2 == 0) {
            B /= 2;
        }
        else if (B % 10 == 1) {
            B = (B - 1) / 10;
        }
        else {
            cnt = -1;
            break;
        }
        cnt += 1;
    }
    if (A != B) cnt = -1;
    cout << cnt;
    return 0;
}
