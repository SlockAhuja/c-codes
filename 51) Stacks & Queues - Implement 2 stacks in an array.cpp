// 51) Stacks & Queues : Implement 2 stacks in an array.
#include <iostream>
using namespace std;

class TwoStacks {
int a[10], t1 = -1, t2 = 10;
public:
void push1(int x){ if(t1 < t2-1) a[++t1] = x; }
void push2(int x){ if(t1 < t2-1) a[--t2] = x; }
int pop1(){ return (t1>=0)? a[t1--] : -1; }
int pop2(){ return (t2<10)? a[t2++] : -1; }
};

int main(){
TwoStacks s;
s.push1(5); s.push2(10); s.push1(15);
cout << s.pop1() << " " << s.pop2();
}
