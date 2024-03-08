#include <iostream>
#include <string>
using namespace std;

int main()
{
    string num;
    cin >> num;
    for (int i = 1; i < num.length(); i++)
    {
        string numA = num.substr(0, i);
        string numB = num.substr(i);
        int multiA = 1;
        int multiB = 1;
        for (int k = 0; k < numA.length(); k++)
        {
            multiA *= numA[k] - '0';
        }
        for (int n = 0; n < numB.length(); n++)
        {
            multiB *= numB[n] - '0';
        }
        if (multiA == multiB)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
