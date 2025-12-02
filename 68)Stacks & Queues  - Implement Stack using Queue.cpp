// 68)Stacks & Queues  : Implement Stack using Queue.
#include <iostream>
#include <queue>
using namespace std;

class Stack {
    queue<int> q;
public:
void push(int x) {
    q.push(x);
int s = q.size();
while(s > 1) {
q.push(q.front());
q.pop();
s--;
        }
    }

void pop() {
if(!q.empty()) q.pop();
    }

int top() {
return q.empty() ? -1 : q.front();
    }

bool empty() {
return q.empty();
    }
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
