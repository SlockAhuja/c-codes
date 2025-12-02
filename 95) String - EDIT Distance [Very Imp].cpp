// 95) String : EDIT Distance [Very Imp]
#include <iostream>
#include <vector>
using namespace std;

int editDistance(string s1, string s2) {
    int n = s1.length(), m = s2.length();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1));

    for (int i = 0; i <= n; i++) dp[i][0] = i;   // delete
    for (int j = 0; j <= m; j++) dp[0][j] = j;   // insert

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s1[i - 1] == s2[j - 1])
                dp[i][j] = dp[i - 1][j - 1];
            else
                dp[i][j] = 1 + min({
                    dp[i - 1][j],     // delete
                    dp[i][j - 1],     // insert
                    dp[i - 1][j - 1]  // replace
                });
        }
    }
    return dp[n][m];
}

int main() {
    string a, b;
    cin >> a >> b;
    cout << editDistance(a, b);
    return 0;
}
