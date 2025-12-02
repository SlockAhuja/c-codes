//97) String :Balanced Parenthesis problem.[Imp]
#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string s) {
    stack<char> st;

    for (char c : s) {
        // opening brackets
        if (c == '(' || c == '{' || c == '[')
            st.push(c);

        // closing brackets
        else {
            if (st.empty()) return false;

            char top = st.top();

            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '['))
                return false;

            st.pop();
        }
    }

    return st.empty();
}

int main() {
    string s;
    cin >> s;

    if (isBalanced(s)) cout << "Balanced";
    else cout << "Not Balanced";

    return 0;
}
