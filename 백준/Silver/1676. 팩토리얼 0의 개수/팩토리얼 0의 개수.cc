#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int fiveCount = 0;
    for (int i = 5; i <= n; i += 5) {
        int temp = i;
        while (temp % 5 == 0 and temp > 0) {
            temp /= 5;
			fiveCount++;
        }
    }
    cout << fiveCount;
    return 0;
}