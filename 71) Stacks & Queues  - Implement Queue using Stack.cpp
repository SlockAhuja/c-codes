// 71) Stacks & Queues  : Implement Queue using Stack.
#include <iostream>
#include <stack>
using namespace std;

class Queue {
stack<int> s1, s2;

public:
void enqueue(int x) {
s1.push(x);
    }

int dequeue() {
if (s1.empty() && s2.empty()) {
cout << "Queue is empty\n";
return -1;
        }
if (s2.empty()) {
while (!s1.empty()) {
s2.push(s1.top());
s1.pop();
            }
        }
int val = s2.top();
s2.pop();
return val;
    }
};

int main() {
Queue q;
q.enqueue(10);
q.enqueue(20);
q.enqueue(30);

cout << q.dequeue() << endl;
cout << q.dequeue() << endl;
cout << q.dequeue() << endl;
}
