// 88) String : Count and Say problem
#include <iostream>
using namespace std;

string countAndSay(int n) {
    string s = "1";

for(int i = 1; i < n; i++) {
string temp = "";
int count = 1;

for(int j = 0; j < s.length(); j++) {
if(j + 1 < s.length() && s[j] == s[j+1]) {
count++;
            } 
else {
temp += to_string(count) + s[j];
count = 1;
            }
        }

s = temp;
    }

return s;
}

int main() {
int n;
cin >> n;
cout << countAndSay(n);
}
