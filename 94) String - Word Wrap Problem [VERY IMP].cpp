// 94) String : Word Wrap Problem [VERY IMP].
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n, W;
    cin >> n >> W;
    vector<int> len(n);
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        len[i] = s.size();
    }

    vector<vector<int>> extra(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        extra[i][i] = W - len[i];
        for (int j = i + 1; j < n; j++)
            extra[i][j] = extra[i][j - 1] - 1 - len[j];
    }

    vector<int> dp(n + 1, INT_MAX);
    dp[n] = 0;

    for (int i = n - 1; i >= 0; i--) {
        for (int j = i; j < n; j++) {
            if (extra[i][j] < 0) break;
            int cost = (j == n - 1) ? 0 : extra[i][j] * extra[i][j];
            dp[i] = min(dp[i], cost + dp[j + 1]);
        }
    }

    cout << dp[0];
}
