//82) Stacks & Queues  : Check if all levels of two trees are anagrams or not.
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int x){ data = x; left = right = NULL; }
};

bool areAnagrams(Node* a, Node* b) {
    if (!a && !b) return true;
    if (!a || !b) return false;

    queue<Node*> q1, q2;
    q1.push(a); 
    q2.push(b);

    while (!q1.empty()) {
        int n = q1.size();
        if (n != q2.size()) return false;

        vector<int> v1, v2;
        while (n--) {
            Node* x = q1.front(); q1.pop();
            Node* y = q2.front(); q2.pop();

            v1.push_back(x->data);
            v2.push_back(y->data);

            if (x->left)  q1.push(x->left);
            if (x->right) q1.push(x->right);
            if (y->left)  q2.push(y->left);
            if (y->right) q2.push(y->right);
        }

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        if (v1 != v2) return false;
    }
    return true;
}

int main() {
    Node* a = new Node(1);
    a->left = new Node(3);
    a->right = new Node(2);

    Node* b = new Node(1);
    b->left = new Node(2);
    b->right = new Node(3);

    cout << (areAnagrams(a, b) ? "Yes" : "No");
}
