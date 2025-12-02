//76) Stacks & Queues  : Reverse the first “K” elements of a queue.
#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reverseK(queue<int> &q, int k) {
stack<int> st;

for (int i = 0; i < k; i++) {
st.push(q.front());
q.pop();
    }
while (!st.empty()) {
q.push(st.top());
        st.pop();
    }
    int t = q.size() - k;
    while (t--) {
        q.push(q.front());
        q.pop();
    }
}

int main() {
queue<int> q;
q.push(10); q.push(20); q.push(30); q.push(40); q.push(50);
int k = 3;
reverseK(q, k);

while (!q.empty()) {
cout << q.front() << " ";
q.pop();
    }
}
