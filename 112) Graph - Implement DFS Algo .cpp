// 112) Graph : Implement DFS Algo 
#include <iostream>
#include <vector>
using namespace std;

void dfs(int node, vector<vector<int>> &g, vector<int> &vis) {
    vis[node] = 1;
    cout << node << " ";

    for (int x : g[node])
        if (!vis[x])
            dfs(x, g, vis);
}

int main() {
    int n = 5;
    vector<vector<int>> g(n);

    // Create graph
    g[0] = {1, 2};
    g[1] = {3};
    g[2] = {3};
    g[3] = {4};

    vector<int> vis(n, 0);

    dfs(0, g, vis);   // DFS starting from node 0

    return 0;
}
