//81) Stacks & Queues  : First negative integer in every window of size “k”
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> firstNeg(vector<int>& a, int k) {
queue<int> q; 
vector<int> ans;

for(int i=0;i<a.size();i++){
if(a[i] < 0) q.push(i);

if(i >= k-1){
while(!q.empty() && q.front() < i-k+1)
q.pop();

if(!q.empty()) ans.push_back(a[q.front()]);
else ans.push_back(0);
        }
    }
    return ans;
}

int main(){
vector<int> a = {12, -1, -7, 8, -15, 30, 16, 28};
int k = 3;

vector<int> res = firstNeg(a, k);
for(int x : res) cout << x << " ";
}
