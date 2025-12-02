//48) LinkedList : Rotate a Doubly Linked list in group of Given Size.[Very IMP]

#include <iostream>
using namespace std;

struct Node {
int data; Node *next, *prev;
Node(int x): data(x), next(NULL), prev(NULL) {}
};

Node* reverseK(Node* head, int k) {
Node* curr = head, *prev = NULL;
int count = 0;
while (curr && count < k) {
Node* next = curr->next;
curr->next = prev;
if (prev) prev->prev = curr;
prev = curr;
curr = next;
count++;
    }
if (curr) {
head->next = reverseK(curr, k);
head->next->prev = head;
    }
prev->prev = NULL;
return prev;
}

void print(Node* head) {
while (head) { cout << head->data << " "; head = head->next; }
    cout << endl;
}

int main() {
Node* head = new Node(1);
head->next = new Node(2); head->next->prev = head;
head->next->next = new Node(3); head->next->next->prev = head->next;
head->next->next->next = new Node(4); head->next->next->next->prev = head->next->next;
head->next->next->next->next = new Node(5); head->next->next->next->next->prev = head->next->next->next;
head->next->next->next->next->next = new Node(6); head->next->next->next->next->next->prev = head->next->next->next->next;

head = reverseK(head, 2);
print(head);
}
