//87) String  : Write a Program to check whether a string is a valid shuffle of two strings or not.
#include <iostream>
#include <algorithm>
using namespace std;

bool isValidShuffle(string a, string b, string c) {
    if (a.length() + b.length() != c.length()) 
        return false;

    string x = a + b;
    sort(x.begin(), x.end());
    sort(c.begin(), c.end());

    return x == c;
}

int main() {
    string a = "abc";
    string b = "def";
    string c = "dabecf";

    if (isValidShuffle(a, b, c))
        cout << "Valid Shuffle";
    else
        cout << "Not a Valid Shuffle";
}
