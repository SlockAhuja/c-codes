// 46) LinkedList : Sort a “k”sorted Doubly Linked list.[Very IMP]
#include <iostream>
#include <queue>
using namespace std;

struct Node {
int data;
Node *prev, *next;
Node(int x): data(x), prev(NULL), next(NULL) {}
};

int main() {
Node *a = new Node(3);
a->next = new Node(6); a->next->prev = a;
a->next->next = new Node(2); a->next->next->prev = a->next;
a->next->next->next = new Node(12); a->next->next->next->prev = a->next->next;
a->next->next->next->next = new Node(56); a->next->next->next->next->prev = a->next->next->next;
a->next->next->next->next->next = new Node(8); a->next->next->next->next->next->prev = a->next->next->next->next;

int k = 2;
priority_queue<int, vector<int>, greater<int>> pq;
for (Node* t = a; t; t = t->next) pq.push(t->data);

cout << "Sorted DLL: ";
while (!pq.empty()) { cout << pq.top() << " "; pq.pop(); }
}
