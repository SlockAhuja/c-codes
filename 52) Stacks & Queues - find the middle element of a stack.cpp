// 52) Stacks & Queues : find the middle element of a stack.

#include <iostream>
#include <stack>
using namespace std;

int main() {
stack<int> s;
for(int i=1;i<=5;i++) s.push(i); // 1 2 3 4 5
int n = s.size()/2; 
for(int i=0;i<n;i++) s.pop();    // remove top half
cout << "Middle element: " << s.top();
}
