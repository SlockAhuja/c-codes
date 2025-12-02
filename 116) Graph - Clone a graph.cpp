// 116) Graph : Clone a graph.
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

struct Node {
    int val; vector<Node*> n;
    Node(int v): val(v) {}
};

Node* clone(Node* node, unordered_map<Node*, Node*> &m) {
    if(!node) return nullptr;
    if(m.count(node)) return m[node];
    Node* c = new Node(node->val);
    m[node]=c;
    for(auto x: node->n) c->n.push_back(clone(x,m));
    return c;
}

int main() {
    Node* n0=new Node(0);
    Node* n1=new Node(1);
    n0->n.push_back(n1); n1->n.push_back(n0);
    unordered_map<Node*,Node*> m;
    Node* g=clone(n0,m);
    cout<<g->val;
}
