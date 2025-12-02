// 43) LinkedList :  Reverse a Doubly Linked list.

#include <iostream>
using namespace std;

struct Node {
int data;
Node *prev, *next;
};

void reverse(Node*& head) {
Node *temp = NULL, *cur = head;
while (cur) {
temp = cur->prev;
cur->prev = cur->next;
cur->next = temp;
cur = cur->prev;
    }
if (temp) head = temp->prev;
}
int main() {
Node *head = new Node{10, NULL, NULL};
head->next = new Node{20, head, NULL};
head->next->next = new Node{30, head->next, NULL};

cout << "Original: ";
for (Node* p = head; p; p = p->next) cout << p->data << " ";

reverse(head);
cout << "\nReversed: ";
for (Node* p = head; p; p = p->next) cout << p->data << " ";
}

