// 67)Stacks & Queues  : Expression contains redundant brackets or not.

#include <iostream>
#include <stack>
using namespace std;

int main() {
string s;
cin >> s;

stack<char> st;

for(char c : s) {
if(c == ')' ) {
bool hasOp = false;
            
while(!st.empty() && st.top() != '(') {
char t = st.top(); st.pop();
if(t=='+' || t=='-' || t=='*' || t=='/') hasOp = true;
            }
st.pop(); // pop '('

if(!hasOp) { 
cout << "Redundant"; 
     return 0; 
            }
        }
else st.push(c);
    }

    cout << "Not Redundant";
}
