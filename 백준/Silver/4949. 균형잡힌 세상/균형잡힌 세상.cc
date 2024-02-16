#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isBalanced(string s) {
    stack<char> st;
    for (char c : s) {
        if (c == '(' || c == '[') {
            st.push(c);
        } else if (c == ')' || c == ']') {
            if (st.empty()) {
                return false;
            }
            char top = st.top();
            st.pop();
            if ((c == ')' && top != '(') || (c == ']' && top != '[')) {
                return false;
            }
        }
    }
    return st.empty();
}

int main() {
    string s;
    while (true) {
        getline(cin, s);
        if (s == ".") {
            break;
        }
        if (isBalanced(s)) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    return 0;
}
