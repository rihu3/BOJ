#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string num;
    cin >> num;

    int decimal = 0;
    int power = num.size() - 1;

    for (char c : num) {
        int digit;
        if (c >= '0' && c <= '9') {
            digit = c - '0';
        } else {
            digit = c - 'A' + 10;
        }
        decimal += digit * pow(16, power);
        power--;
    }

    cout << decimal;
    return 0;
}
