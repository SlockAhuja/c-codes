//47) LinkedList : Rotate DoublyLinked list by N nodes.

#include <iostream>
using namespace std;

struct Node {
int data; Node *next, *prev;
Node(int x) : data(x), next(NULL), prev(NULL) {}
};

void rotate(Node** head, int N) {
if (!*head || N == 0) return;
Node* temp = *head;
for (int i = 1; i < N && temp; i++) temp = temp->next;
if (!temp) return;

Node* newHead = temp->next;
if (!newHead) return;
newHead->prev = NULL;
temp->next = NULL;

Node* last = newHead;
while (last->next) last = last->next;
last->next = *head;
(*head)->prev = last;
*head = newHead;
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

rotate(&head, 2);
print(head);
}
