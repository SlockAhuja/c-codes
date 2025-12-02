// 61) Stacks & Queues  : Implement a method to insert an element at its bottom without using any other data structure.
#include <iostream>
#include <stack>
using namespace std;

void insertBottom(stack<int> &st, int x) {
if(st.empty()) {        
st.push(x);
return;
    }
int top = st.top();    
st.pop();
insertBottom(st, x);    
st.push(top);          
}

int main() {
stack<int> st;
st.push(1);
st.push(2);
st.push(3);

insertBottom(st, 0);    
while(!st.empty()) {
cout << st.top() << " ";
st.pop();
}
}
