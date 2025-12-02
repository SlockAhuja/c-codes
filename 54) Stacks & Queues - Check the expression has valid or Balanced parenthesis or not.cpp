// 54) Stacks & Queues : Check the expression has valid or Balanced parenthesis or not. 

#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string exp) {
stack<char> s;
for(char ch : exp) {
if(ch=='('||ch=='{'||ch=='[') s.push(ch);
else if(ch==')'||ch=='}'||ch==']') {
if(s.empty()) return false;
char top = s.top(); s.pop();
if((ch==')'&&top!='(')||(ch=='}'&&top!='{')||(ch==']'&&top!='['))
return false;
        }
    }
return s.empty();
}

int main() {
string exp = "{[()]}";
cout << (isBalanced(exp) ? "Balanced" : "Not Balanced");
}
