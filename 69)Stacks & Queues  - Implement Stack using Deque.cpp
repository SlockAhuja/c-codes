// 69)Stacks & Queues  : Implement Stack using Deque
 
#include <iostream>
#include <deque>
using namespace std;

class Stack {
deque<int> dq;
public:
void push(int x) { dq.push_back(x); }
void pop()  { if(!dq.empty()) dq.pop_back(); }
int top()   { return dq.empty() ? -1 : dq.back(); }
bool empty(){ return dq.empty(); }
};

int main() {
Stack s;
s.push(10);
s.push(20);
s.push(30);

cout << s.top() << endl; // 30
s.pop();
cout << s.top() << endl; // 20
}
 


