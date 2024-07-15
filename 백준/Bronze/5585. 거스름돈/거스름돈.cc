#include <iostream>
using namespace std;

int main()
{
    int money;
    cin >> money;
    int cnt = 0;
    money = 1000 - money;
    while (money > 0)
    {
        if (money >= 500)
        {
            money -= 500;
            cnt++;
        }
        else if (money >= 100)
        {
            money -= 100;
            cnt++;
        }
        else if (money >= 50)
        {
            money -= 50;
            cnt++;
        }
        else if (money >= 10)
        {
            money -= 10;
            cnt++;
        }
        else if (money >= 5)
        {
            money -= 5;
            cnt++;
        }
        else
        {
            money -= 1;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}