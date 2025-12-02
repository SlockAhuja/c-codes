// 93) String : Split the Binary string into two substring with equal 0’s and 1’s
#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int cnt0 = 0, cnt1 = 0, res = 0;

    for(char c : s) {
        if(c == '0') cnt0++;
        else cnt1++;

        if(cnt0 == cnt1)
            res++;
    }

    if(res == 0) cout << -1;
    else cout << res;
}
