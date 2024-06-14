#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << a + b - c << endl;
    cout << stoi(to_string(a) + to_string(b)) - c;
    return 0;
}