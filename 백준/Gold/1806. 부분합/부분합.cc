#include <iostream>
using namespace std;

int Ary[100000];

int main()
{
    int N, S;
    cin >> N >> S;
    for (int i = 0; i < N; i++)
        cin >> Ary[i];

    int left = 0, right = -1;
    int sum = 0;
    int result = N + 1;
    while (left < N) {
        if (sum < S) {
            right++;
            if (right == N) break;
            sum += Ary[right];
       }
        else {
            int len = right - left + 1;
            if (result > len) result = len;
            sum -= Ary[left];
            left++;
        }
    }
    if (result == N + 1) result = 0;
    cout << result << endl;
    return 0;
}
