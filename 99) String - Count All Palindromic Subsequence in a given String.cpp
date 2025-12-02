//99) String : Count All Palindromic Subsequence in a given String.
#include <iostream>
#include <vector>
using namespace std;

int countPalSubseq(string s) {
    int n = s.length();
    vector<vector<long long>> dp(n, vector<long long>(n, 0));

    // Single characters are palindromic subsequences
    for (int i = 0; i < n; i++)
        dp[i][i] = 1;

    // length of substring
    for (int len = 2; len <= n; len++) {
        for (int i = 0; i + len - 1 < n; i++) {
            int j = i + len - 1;

            if (s[i] == s[j]) {
                dp[i][j] = dp[i+1][j] + dp[i][j-1] + 1;
            } else {
                dp[i][j] = dp[i+1][j] + dp[i][j-1] - dp[i+1][j-1];
            }
        }
    }

    return dp[0][n-1];
}

int main() {
    string s;
    cin >> s;
    cout << countPalSubseq(s);
    return 0;
}
