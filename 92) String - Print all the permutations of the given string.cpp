// 92) String : Print all the permutations of the given string
#include <iostream>
using namespace std;

void permute(string s, int l) {
    if(l == s.length()-1) {
        cout << s << endl;
        return;
    }

    for(int i = l; i < s.length(); i++) {
        swap(s[l], s[i]);
        permute(s, l+1);
        swap(s[l], s[i]); // backtrack
    }
}

int main() {
    string s;
    cin >> s;
    permute(s, 0);
}
