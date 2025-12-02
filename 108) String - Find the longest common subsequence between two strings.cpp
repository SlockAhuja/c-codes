// 108) String : Find the longest common subsequence between two strings.
#include <iostream>
using namespace std;

int main() {
    string a = "ABCBDAB", b = "BDCABA";
    int n = a.size(), m = b.size();
    int dp[101][101];

    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= m; j++)
            if (i == 0 || j == 0) dp[i][j] = 0;
            else if (a[i-1] == b[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);

    cout << dp[n][m];
    return 0;
}
