// 105) String : Number of flips to make binary string alternate
#include <iostream>
using namespace std;

int flips(string s, char start) {
    int cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != start) cnt++;
        start = (start == '0') ? '1' : '0';
    }
    return cnt;
}

int main() {
    string s = "0001010111";
    cout << min(flips(s, '0'), flips(s, '1'));
    return 0;
}
