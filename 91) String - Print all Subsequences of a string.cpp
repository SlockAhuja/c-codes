// 91) String : Print all Subsequences of a string.
#include <iostream>
using namespace std;

void subseq(string s, int i, string cur) {
    if(i == s.length()) {
        if(cur != "")
            cout << cur << endl;
        return;
    }

    subseq(s, i+1, cur + s[i]); // include
    subseq(s, i+1, cur);        // exclude
}

int main() {
    string s;
    cin >> s;
    subseq(s, 0, "");
}
