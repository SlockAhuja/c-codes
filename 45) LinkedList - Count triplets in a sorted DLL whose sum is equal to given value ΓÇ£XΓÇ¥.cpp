// 45) LinkedList : Count triplets in a sorted DLL whose sum is equal to given value “X”.

#include <iostream>
using namespace std;

struct Node {
int data;
Node *prev, *next;
};

int main() {
Node *a = new Node{1,0,0};
a->next = new Node{2,a,0};
a->next->next = new Node{4,a->next,0};
a->next->next->next = new Node{5,a->next->next,0};
a->next->next->next->next = new Node{6,a->next->next->next,0};
a->next->next->next->next->next = new Node{8,a->next->next->next->next,0};

int x = 15, cnt = 0;
for (Node *p = a; p; p = p->next)
for (Node *q = p->next; q; q = q->next)
for (Node *r = q->next; r; r = r->next)
if (p->data + q->data + r->data == x)
cnt++;

cout << "Count = " << cnt;
}
