//98) String : Word break Problem[ Very Imp]
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool wordBreak(string s, vector<string>& dict) {
    unordered_set<string> st(dict.begin(), dict.end());
    int n = s.length();
    
    vector<int> dp(n + 1, 0);
    dp[0] = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            if (dp[j] && st.count(s.substr(j, i - j))) {
                dp[i] = 1;
                break;
            }
        }
    }
    return dp[n];
}

int main() {
    string s;
    int n;
    cin >> s >> n;

    vector<string> dict(n);
    for (int i = 0; i < n; i++)
        cin >> dict[i];

    if (wordBreak(s, dict)) cout << "YES";
    else cout << "NO";

    return 0;
}
