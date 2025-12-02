// 117) Graph : Implement Topological Sort  
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void topoDFS(int v, vector<vector<int>> &adj, vector<bool> &vis, stack<int> &st) {
    vis[v] = true;
    for(int u : adj[v])
        if(!vis[u]) topoDFS(u, adj, vis, st);
    st.push(v);
}

int main() {
    int V = 6;
    vector<vector<int>> adj(V);
    adj[5] = {2,0};
    adj[4] = {0,1};
    adj[2] = {3};
    adj[3] = {1};

    vector<bool> vis(V, false);
    stack<int> st;
    for(int i=0;i<V;i++)
        if(!vis[i]) topoDFS(i, adj, vis, st);

    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
}
