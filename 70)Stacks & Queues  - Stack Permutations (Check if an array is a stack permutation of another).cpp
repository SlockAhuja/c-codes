// 70)Stacks & Queues  : Stack Permutations (Check if an array is a stack permutation of another).

#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    cin >> n;

int a[n], b[n];
for(int i = 0; i < n; i++) cin >> a[i];  
for(int i = 0; i < n; i++) cin >> b[i];  

stack<int> st;
int j = 0;

for(int i = 0; i < n; i++) {
st.push(a[i]);

while(!st.empty() && st.top() == b[j]) {
st.pop();
j++;
        }
    }

if(j == n) cout << "Yes";
else       cout << "No";
}
