//50) Stacks & Queues :  Implement Queue from Scratch.

#include <iostream>
using namespace std;

#define MAX 100
class Queue {
int arr[MAX], front, rear;
public:
Queue() { front = rear = -1; }

void enqueue(int x) {
if (rear == MAX - 1) { cout << "Overflow\n"; return; }
if (front == -1) front = 0;
arr[++rear] = x;
    }
void dequeue() {
if (front == -1 || front > rear) { cout << "Underflow\n"; return; }
front++;
    }
int peek() {
if (front == -1 || front > rear) { cout << "Empty\n"; return -1; }
return arr[front];
    }

bool empty() { return (front == -1 || front > rear); }
};

int main() {
Queue q;
q.enqueue(10);
q.enqueue(20);
q.enqueue(30);
cout << q.peek() << endl; // 10
q.dequeue();
cout << q.peek() << endl; // 20
}
