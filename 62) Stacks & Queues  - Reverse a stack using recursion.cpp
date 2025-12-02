// 62) Stacks & Queues  : Reverse a stack using recursion

#include <iostream>
#include <stack>
using namespace std;

void insertBottom(stack<int> &st, int x) {
if(st.empty()) {
st.push(x);
return;
    }
int t = st.top();
st.pop();
insertBottom(st, x);
st.push(t);
}

void reverseStack(stack<int> &st) {
if(st.empty()) return;
int x = st.top();
st.pop();

reverseStack(st);
insertBottom(st, x);
}

int main() {
stack<int> st;
st.push(1);
st.push(2);
st.push(3);

reverseStack(st);

while(!st.empty()) {
cout << st.top() << " ";
st.pop();
    }
}
