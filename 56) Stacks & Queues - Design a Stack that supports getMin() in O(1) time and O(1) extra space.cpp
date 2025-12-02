// 56) Stacks & Queues : Design a Stack that supports getMin() in O(1) time and O(1) extra space.

#include <iostream>
#include <stack>
using namespace std;

class MinStack {
stack<long long> s; 
long long minVal;
public:
    
void push(int x) {
if (s.empty()) minVal = x;
if (x < minVal) { s.push(2LL*x - minVal); minVal = x; }
else s.push(x);
    }
void pop() {
if (s.top() < minVal) minVal = 2LL*minVal - s.top();
s.pop();
    }
int top() { return s.top() < minVal ? minVal : s.top(); }
int getMin() { return minVal; }
};

int main() {
MinStack st;
st.push(5); st.push(3); st.push(7);
cout << st.getMin() << endl;
st.pop();
cout << st.getMin() << endl;
}
