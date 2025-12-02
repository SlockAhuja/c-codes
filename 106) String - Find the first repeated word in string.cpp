// 106) String : Find the first repeated word in string.
#include <iostream>
#include <sstream>
#include <map>
using namespace std;

int main() {
    string s = "he had had he";
    string word;
    map<string,int> mp;

    stringstream ss(s);
    while (ss >> word) {
        mp[word]++;
        if (mp[word] == 2) {
            cout << word;
            return 0;
        }
    }
    cout << "No repeated word";
    return 0;
}
