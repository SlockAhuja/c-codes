// 58) Stacks & Queues  :  The Celebrity Problem.
#include <iostream>
#include <stack>
using namespace std;

bool knows(int M[4][4], int a, int b) { return M[a][b]; }

int main() {
int M[4][4] = {{0,1,0,0},{0,0,0,0},{0,1,0,0},{0,1,0,0}};
int n = 4;
stack<int> s;
for(int i=0;i<n;i++) s.push(i);
while(s.size()>1){
int a=s.top(); s.pop();
int b=s.top(); s.pop();
s.push(knows(M,a,b)?b:a);
    }
int c=s.top();
for(int i=0;i<n;i++)
if(i!=c && (knows(M,c,i)||!knows(M,i,c))){ cout<<"No Celebrity"; return 0; }
cout<<"Celebrity ID: "<<c;
}
