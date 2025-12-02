// 103) String : Converting Roman Numerals to Decimal
#include <iostream>
using namespace std;

int value(char c) {
    if (c=='I') return 1;
    if (c=='V') return 5;
    if (c=='X') return 10;
    if (c=='L') return 50;
    if (c=='C') return 100;
    if (c=='D') return 500;
    return 1000;
}

int romanToDecimal(string s) {
    int n = s.size(), res = 0;
    for (int i = 0; i < n; i++) {
        int v1 = value(s[i]);
        if (i + 1 < n) {
            int v2 = value(s[i + 1]);
            if (v1 < v2)
                res -= v1;
            else
                res += v1;
        } else {
            res += v1;
        }
    }
    return res;
}

int main() {
    string s = "MCMIV";  // 1904
    cout << romanToDecimal(s);
    return 0;
}
