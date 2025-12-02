// 110) Graph : Create a Graph, print it
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 5;               // number of nodes
    vector<vector<int>> g(n);

    // add edges (undirected graph)
    g[0].push_back(1);
    g[0].push_back(2);
    g[1].push_back(3);
    g[2].push_back(3);
    g[3].push_back(4);

    // print graph
    for (int i = 0; i < n; i++) {
        cout << i << " -> ";
        for (int x : g[i]) cout << x << " ";
        cout << "\n";
    }

    return 0;
}
