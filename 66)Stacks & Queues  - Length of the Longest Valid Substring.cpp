// 66)Stacks & Queues  : Length of the Longest Valid Substring.

#include <iostream>
#include <stack>
using namespace std;

int main() {
string s;
cin >> s;

stack<int> st;
st.push(-1);
int ans = 0;

for(int i = 0; i < s.size(); i++) {
if(s[i] == '(') st.push(i);
else {
st.pop();
if(st.empty()) st.push(i);
else ans = max(ans, i - st.top());
        }
    }
    cout << ans;
}
