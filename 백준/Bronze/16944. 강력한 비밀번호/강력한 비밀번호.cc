#include <iostream>
#include <string>
using namespace std;

char special[12] = { '!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '-', '+' };

// 소문자, 대문자, 숫자를 검사하는 함수
bool check(string code, char start, char end)
{
    for (int i = 0; i < code.length(); i++)
    {
        if (code[i] >= start && code[i] <= end)
        {
            return true;
        }
    }
    return false;
}

// 특수 문자를 검사하는 함수
bool spe_check(string code)
{
    for (int i = 0; i < code.length(); i++)
    {
        for (int j = 0; j < 12; j++)
        {
            if (code[i] == special[j])
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int len;
    string code;
    cin >> len;  // 비밀번호 길이 입력
    cin >> code;  // 비밀번호 문자열 입력

    int addCount = 0;  // 추가해야 할 문자 개수

    // 각 조건을 만족하지 않으면 addCount 증가
    if (!check(code, 'a', 'z'))  // 소문자 체크
        addCount++;
    if (!check(code, 'A', 'Z'))  // 대문자 체크
        addCount++;
    if (!check(code, '0', '9'))  // 숫자 체크
        addCount++;
    if (!spe_check(code))        // 특수문자 체크
        addCount++;

    // 비밀번호의 길이가 6자리 미만이면 필요한 문자 개수만큼 더 추가
    int result = max(addCount, 6 - len);
    cout << result;  // 추가해야 할 문자 개수 출력

    return 0;
}
