#include <iostream>
#include <string>
using namespace std;

void FizzBuzz(int num)
{
    if (num % 3 == 0 && num % 5 == 0)
        cout << "FizzBuzz";
    else if (num % 3 == 0 && num % 5 != 0)
        cout << "Fizz";
    else if (num % 3 != 0 && num % 5 == 0)
        cout << "Buzz";
    else
        cout << num;
}

int main()
{
    string input;
    int num = 0;
    for (int i = 0; i < 3; i++)
    {
        cin >> input;
        if ('0' <= input[0] && input[0] <= '9')
        {
            num = stoi(input) + 3 - i;
            break;
        }
    }
    FizzBuzz(num);
    return 0;
}