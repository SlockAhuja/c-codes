//77) Stacks & Queues  : Interleave the first half of the queue with second half.
#include <iostream>
#include <queue>
using namespace std;

void interleave(queue<int> &q) {
    int n = q.size();
    queue<int> firstHalf;

    // Move first half elements into another queue
    for (int i = 0; i < n/2; i++) {
        firstHalf.push(q.front());
        q.pop();
    }

    // Interleave both halves
    while (!firstHalf.empty()) {
        q.push(firstHalf.front());
        firstHalf.pop();
        q.push(q.front());
        q.pop();
    }
}

int main() {
    queue<int> q;
    q.push(1); q.push(2); q.push(3); q.push(4);
    q.push(5); q.push(6); q.push(7); q.push(8);

    interleave(q);

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}
