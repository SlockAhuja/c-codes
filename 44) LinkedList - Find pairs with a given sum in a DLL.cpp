// 44) LinkedList : Find pairs with a given sum in a DLL.

#include <iostream>
using namespace std;

struct Node {
int data;
Node *prev, *next;
};

int main() {
Node *a = new Node{1, NULL, NULL};
a->next = new Node{2, a, NULL};
a->next->next = new Node{4, a->next, NULL};
a->next->next->next = new Node{5, a->next->next, NULL};
a->next->next->next->next = new Node{6, a->next->next->next, NULL};

int sum = 7;
Node *l = a, *r = a;
while (r->next) r = r->next;

cout << "Pairs: ";
while (l != r && r->next != l) {
int s = l->data + r->data;
if (s == sum) { cout << "(" << l->data << "," << r->data << ") "; l = l->next; r = r->prev; }
else if (s < sum) l = l->next;
else r = r->prev;
    }
}
