// 101) String :Search a Word in a 2D Grid of characters.
#include <iostream>
#include <vector>
using namespace std;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

bool search(vector<vector<char>> &g, string w, int x, int y) {
    if (g[x][y] != w[0]) return false;
    int n = g.size(), m = g[0].size();

    for (int d = 0; d < 4; d++) {
        int i = x, j = y, k = 0;
        while (i >= 0 && i < n && j >= 0 && j < m && k < w.size() && g[i][j] == w[k]) {
            i += dx[d];
            j += dy[d];
            k++;
        }
        if (k == w.size()) return true;
    }
    return false;
}

int main() {
    vector<vector<char>> g = {
        {'C','A','T'},
        {'A','T','A'},
        {'T','A','C'}
    };

    string w = "CAT";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (search(g, w, i, j))
                cout << "Found at (" << i << ", " << j << ")\n";
        }
    }
    return 0;
}
