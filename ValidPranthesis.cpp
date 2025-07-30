#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string s = "({[]})";
    stack<char> st;

    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        } else {
            if (st.empty()) {
                cout << "false" << endl;
                return 0;
            }

            char top = st.top();
            st.pop();

            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[')) {
                cout << "false" << endl;
                return 0;
            }
        }
    }

    if (st.empty()) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
