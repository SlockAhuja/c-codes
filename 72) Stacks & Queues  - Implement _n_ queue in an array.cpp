// 72) Stacks & Queues  : Implement "n" queue in an array.
#include <iostream>
using namespace std;

class NQueue {
    int *arr, *front, *rear, *next;
    int freespot;
public:
NQueue(int n, int size) {
arr = new int[size];
front = new int[n];
rear = new int[n];
next = new int[size];

for (int i = 0; i < n; i++) front[i] = rear[i] = -1;
for (int i = 0; i < size - 1; i++) next[i] = i + 1;
next[size - 1] = -1;
freespot = 0;
    }

void enqueue(int qi, int x) {
int i = freespot;
if (i == -1) return;
freespot = next[i];

if (front[qi] == -1) front[qi] = i;
else next[rear[qi]] = i;

next[i] = -1;
rear[qi] = i;
arr[i] = x;
    }

int dequeue(int qi) {
if (front[qi] == -1) return -1;
int i = front[qi];
front[qi] = next[i];
next[i] = freespot;
freespot = i;
return arr[i];
    }
};

int main() {
NQueue q(3, 10);

q.enqueue(0, 10);
q.enqueue(1, 20);
q.enqueue(2, 30);

cout << q.dequeue(0) << " ";
cout << q.dequeue(1) << " ";
cout << q.dequeue(2);
}
