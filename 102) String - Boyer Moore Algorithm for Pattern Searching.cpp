// 102) String : Boyer Moore Algorithm for Pattern Searching.
#include <iostream>
using namespace std;

void search(string pat, string txt) {
    int m = pat.size(), n = txt.size();
    int bad[256];

    for (int i = 0; i < 256; i++) bad[i] = -1;
    for (int i = 0; i < m; i++) bad[(int)pat[i]] = i;

    int s = 0;
    while (s <= n - m) {
        int j = m - 1;

        while (j >= 0 && pat[j] == txt[s + j]) j--;

        if (j < 0) {
            cout << "Found at index " << s << "\n";
            s += (s + m < n) ? m - bad[txt[s + m]] : 1;
        } else {
            s += max(1, j - bad[txt[s + j]]);
        }
    }
}

int main() {
    string txt = "ABAAABCD";
    string pat = "ABC";
    search(pat, txt);
    return 0;
}
