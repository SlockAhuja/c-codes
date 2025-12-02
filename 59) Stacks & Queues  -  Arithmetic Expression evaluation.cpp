// 59) Stacks & Queues  :  Arithmetic Expression evaluation.

#include <iostream>
#include <stack>
using namespace std;

int prec(char c){ return (c=='+'||c=='-')?1:(c=='*'||c=='/')?2:0; }
int calc(int a,int b,char op){
if(op=='+') return a+b;
if(op=='-') return a-b;
if(op=='*') return a*b;
return a/b;
}

int main(){
string s="3+(2*5)-9/3";
stack<int> val; stack<char> op;
for(int i=0;i<s.size();i++){
if(isdigit(s[i])) val.push(s[i]-'0');
else if(s[i]=='(') op.push('(');
else if(s[i]==')'){
while(op.top()!='('){
int b=val.top(); val.pop();
int a=val.top(); val.pop();
val.push(calc(a,b,op.top())); op.pop();
            } op.pop();
} else {
while(!op.empty() && prec(op.top())>=prec(s[i])){
int b=val.top(); val.pop();
int a=val.top(); val.pop();
val.push(calc(a,b,op.top())); op.pop();
            }
op.push(s[i]);
        }
    }
while(!op.empty()){
        int b=val.top(); val.pop();
        int a=val.top(); val.pop();
        val.push(calc(a,b,op.top())); op.pop();
    }
    cout<<val.top();
}
