#include <iostream>
using namespace std;

int slot[1000000] = { 0, };

int main() {
    int N, Q;
    cin >> N >> Q;
    for (int i = 1; i <= Q; i++) {
        int start, skip;
        cin >> start >> skip;
        for (int j = start; j <= N; j += skip)
        {
            slot[j] = 1;
        }
    }
    int blank = 0;
    for (int i = 1; i <= N; i++)
    {
        if (slot[i] == 0)
            blank++;
    }
    cout << blank;
    return 0;
}