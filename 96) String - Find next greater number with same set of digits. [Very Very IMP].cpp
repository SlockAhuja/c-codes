// 96) String : Find next greater number with same set of digits. [Very Very IMP]
#include <iostream>
#include <algorithm>
using namespace std;

bool nextGreater(string &s) {
    int n = s.length();
    
    // Step 1: find break point
    int i = n - 2;
    while (i >= 0 && s[i] >= s[i + 1]) i--;

    if (i < 0) return false;   // no greater number

    // Step 2: find element just greater than s[i]
    int j = n - 1;
    while (s[j] <= s[i]) j--;

    swap(s[i], s[j]);

    // Step 3: reverse suffix
    reverse(s.begin() + i + 1, s.end());
    return true;
}

int main() {
    string s;
    cin >> s;

    if (nextGreater(s)) cout << s;
    else cout << "Not Possible";

    return 0;
}
