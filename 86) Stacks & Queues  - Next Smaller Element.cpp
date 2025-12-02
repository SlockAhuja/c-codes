//86) Stacks & Queues  : Next Smaller Element
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> nextSmaller(vector<int>& arr) {
    int n = arr.size();
    vector<int> ans(n, -1);
    stack<int> st;

    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && st.top() >= arr[i])
            st.pop();

        if (!st.empty()) ans[i] = st.top();

        st.push(arr[i]);
    }
    return ans;
}

int main() {
    vector<int> arr = {4, 8, 5, 2, 25};
    vector<int> res = nextSmaller(arr);

    for (int x : res) cout << x << " ";
}
