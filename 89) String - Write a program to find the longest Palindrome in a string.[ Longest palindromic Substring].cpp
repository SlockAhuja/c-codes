// 89) String : Write a program to find the longest Palindrome in a string.[ Longest palindromic Substring]
#include <iostream>
using namespace std;

string longestPalindrome(string s) {
    int n = s.length();
    if(n < 2) return s;

    int start = 0, maxLen = 1;

    auto expand = [&](int left, int right){
        while(left >= 0 && right < n && s[left] == s[right]) {
            if(right - left + 1 > maxLen) {
                maxLen = right - left + 1;
                start = left;
            }
            left--;
            right++;
        }
    };

    for(int i = 0; i < n; i++) {
        expand(i, i);       // odd length
        expand(i, i + 1);   // even length
    }

    return s.substr(start, maxLen);
}

int main() {
    string s;
    cin >> s;
    cout << longestPalindrome(s);
}
