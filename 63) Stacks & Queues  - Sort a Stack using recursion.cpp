// 63) Stacks & Queues  : Sort a Stack using recursion.

#include <iostream>
#include <stack>
using namespace std;

void ins(stack<int>& s, int x){
if(s.empty() || x > s.top()){ s.push(x); return; }
int t=s.top(); s.pop();
ins(s,x);
s.push(t);
}

void sortStack(stack<int>& s){
if(s.empty()) return;
int x=s.top(); s.pop();
sortStack(s);
ins(s,x);
}

int main(){
stack<int> s;
s.push(3); s.push(1); s.push(4); s.push(2);

sortStack(s);

while(!s.empty()){
cout << s.top() << " ";
s.pop();
    }
}
