// 111) Graph : Implement BFS algorithm 
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int n = 5;
    vector<vector<int>> g(n);

    // Create graph
    g[0] = {1, 2};
    g[1] = {3};
    g[2] = {3};
    g[3] = {4};

    vector<int> visited(n, 0);
    queue<int> q;

    int start = 0;      // BFS starts from node 0
    q.push(start);
    visited[start] = 1;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";

        for (int x : g[node]) {
            if (!visited[x]) {
                visited[x] = 1;
                q.push(x);
            }
        }
    }

    return 0;
}
