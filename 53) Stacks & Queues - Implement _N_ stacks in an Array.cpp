// 53) Stacks & Queues : Implement "N" stacks in an Array.
#include <iostream>
using namespace std;

class NStacks {
int a[20], top[3], next[20], freeTop = 0;
public:
    
NStacks() {
for(int i=0;i<3;i++) top[i] = -1;
for(int i=0;i<19;i++) next[i] = i+1;
next[19] = -1;
    }
void push(int x,int sn){
int i = freeTop; freeTop = next[i];
next[i] = top[sn]; top[sn] = i; a[i] = x;
    }
int pop(int sn){
int i = top[sn]; top[sn] = next[i];
next[i] = freeTop; freeTop = i;
return a[i];
    }
};

int main(){
NStacks s;
s.push(10,0); s.push(20,1); s.push(30,2);
cout<<s.pop(0)<<" "<<s.pop(1)<<" "<<s.pop(2);}
