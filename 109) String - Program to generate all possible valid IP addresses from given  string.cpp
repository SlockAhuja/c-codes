// 109) String : Program to generate all possible valid IP addresses from given  string.
#include <iostream>
#include <vector>
using namespace std;

bool valid(string s) {
    if (s.size() > 1 && s[0] == '0') return false;
    int num = stoi(s);
    return num >= 0 && num <= 255;
}

void solve(string s, int idx, int dots, string curr) {
    if (dots == 3) {
        string last = s.substr(idx);
        if (valid(last)) cout << curr << last << "\n";
        return;
    }

    for (int i = 1; i <= 3 && idx + i <= s.size(); i++) {
        string part = s.substr(idx, i);
        if (valid(part))
            solve(s, idx + i, dots + 1, curr + part + ".");
    }
}

int main() {
    string s = "25525511135";
    solve(s, 0, 0, "");
    return 0;
}
