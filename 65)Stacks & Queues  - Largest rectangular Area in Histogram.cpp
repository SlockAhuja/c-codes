// 65)Stacks & Queues  : Largest rectangular Area in Histogram
#include <iostream>
#include <stack>
using namespace std;

int main() {
int n; 
cin >> n;
int a[n];
for(int i = 0; i < n; i++) cin >> a[i];

stack<int> st;
int ans = 0, i = 0;

while(i < n) {
if(st.empty() || a[st.top()] <= a[i])
st.push(i++);
        
else {
int h = a[st.top()]; st.pop();
int w = st.empty() ? i : i - st.top() - 1;
ans = max(ans, h * w);
        }
    }

while(!st.empty()) {
int h = a[st.top()]; st.pop();
int w = st.empty() ? i : i - st.top() - 1;
ans = max(ans, h * w);
    }

    cout << ans;
}
