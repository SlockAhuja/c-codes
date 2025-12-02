// 113) Graph : Detect Cycle in Directed Graph using BFS/DFS Algo 
#include <iostream>
#include <vector>
using namespace std;

bool dfs(int node, vector<vector<int>> &g, vector<int> &vis, vector<int> &path) {
    vis[node] = path[node] = 1;

    for (int x : g[node]) {
        if (!vis[x] && dfs(x, g, vis, path)) return true;
        else if (path[x]) return true; 
    }

    path[node] = 0;
    return false;
}

int main() {
    int n = 4;
    vector<vector<int>> g(n);

    g[0] = {1};
    g[1] = {2};
    g[2] = {3};
    g[3] = {1};  // cycle here

    vector<int> vis(n, 0), path(n, 0);

    for (int i = 0; i < n; i++)
        if (!vis[i] && dfs(i, g, vis, path)) {
            cout << "Cycle detected";
            return 0;
        }

    cout << "No cycle";
    return 0;
}
