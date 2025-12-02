// 73) Stacks & Queues  : Implement a Circular queue.
#include <iostream>
using namespace std;

class CQueue {
    int *a, n, f, r;
public:
CQueue(int n) { this->n=n; a=new int[n]; f=r=-1; }

void enq(int x) {
if ((r+1)%n == f) return;          
if (f==-1) f=0;
r = (r+1)%n;
a[r] = x;
    }

int deq() {
if (f==-1) return -1;            
int x = a[f];
if (f==r) f=r=-1;
else f = (f+1)%n;
return x;
    }
};

int main() {
CQueue q(5);
q.enq(10);
q.enq(20);
cout << q.deq() << " ";
cout << q.deq();
}
