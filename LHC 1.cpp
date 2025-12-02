#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> st;

    while (n--) {
        string cmd;
        cin >> cmd;

        if (cmd == "ATTACH") {
            string x;
            cin >> x;
            st.push_back(x);
        }
        else if (cmd == "DETACH") {
            if (!st.empty()) st.pop_back();
        }
        else { // SHOW
            if (st.empty()) cout << "EMPTY\n";
            else {
                for (size_t i = 0; i < st.size(); i++) {
                    cout << st[i];
                    if (i + 1 < st.size()) cout << " ";
                }
                cout << "\n";
            }
        }
    }
}
