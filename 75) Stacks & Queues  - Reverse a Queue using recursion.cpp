// 75) Stacks & Queues  : Reverse a Queue using recursion.
#include <iostream>
#include <queue>
using namespace std;

void reverseQ(queue<int> &q) {
if (q.empty()) return;
int x = q.front();
q.pop();
reverseQ(q);
q.push(x);
}

int main() {
queue<int> q;
q.push(10);
q.push(20);
q.push(30);

reverseQ(q);

while (!q.empty()) {
cout << q.front() << " ";
q.pop();
    }
}
