#include <iostream>
#include <stack>
using namespace std;

int main() {
    int T;
    cin >> T;  // 테스트 케이스 수 입력
    for (int i = 0; i < T; i++) {
        int n;
        string pattern;
        cin >> n >> pattern;  // 패턴 길이와 패턴 문자열 입력

        stack<char> stk;  // 스택 생성
        bool legal = true; // 기본적으로 법적이라고 가정

        for (char x : pattern) { // 문자열의 각 문자에 대해 반복
            if (x == '>') {
                stk.push(x); // 소가 들어오면 스택에 추가
            }
            else if (x == '<') {
                if (stk.empty()) {
                    legal = false; // 스택이 비어있으면 불법
                    break; // 더 이상 확인할 필요 없음
                }
                else {
                    stk.pop(); // 쌍을 이루면 스택에서 제거
                }
            }
        }

        // 루프가 끝난 후 스택이 비어 있지 않으면 불법
        if (legal && stk.empty()) {
            cout << "legal" << endl;
        }
        else {
            cout << "illegal" << endl;
        }
    }
    return 0;
}
