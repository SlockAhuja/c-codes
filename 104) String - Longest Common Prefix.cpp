// 104) String : Longest Common Prefix
#include <iostream>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string> &a) {
    string ans = a[0];
    for (int i = 1; i < a.size(); i++) {
        int j = 0;
        while (j < ans.size() && j < a[i].size() && ans[j] == a[i][j])
            j++;
        ans = ans.substr(0, j);
        if (ans == "") return "";
    }
    return ans;
}

int main() {
    vector<string> a = {"flower", "flow", "flight"};
    cout << longestCommonPrefix(a);
    return 0;
}
