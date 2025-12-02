// 41) LinkedList : Write a Program to check whether the Singly Linked list is a palindrome or not.
#include <iostream>
#include <stack>
using namespace std;

struct Node {
int data;
Node* next;
};

bool isPalindrome(Node* head) {
stack<int> s;
Node* temp = head;
while (temp) {
s.push(temp->data);
temp = temp->next;
    }
temp = head;
while (temp) {
if (temp->data != s.top()) return false;
s.pop();
temp = temp->next;
    }
return true;
}

int main() {
Node* head = new Node{1, new Node{2, new Node{2, new Node{1, nullptr}}}};
    
if (isPalindrome(head))
cout << "Palindrome";
else
cout << "Not Palindrome";
}

