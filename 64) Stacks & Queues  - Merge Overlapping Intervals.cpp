// 64) Stacks & Queues  : Merge Overlapping Intervals
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int,int>> mergeIntervals(vector<pair<int,int>>& a){
sort(a.begin(), a.end());        

vector<pair<int,int>> res;
res.push_back(a[0]);

for(int i=1;i<a.size();i++){
if(a[i].first <= res.back().second){
res.back().second = max(res.back().second, a[i].second);
} 
else {
    res.push_back(a[i]);
        }
    }
return res;
}

int main(){
vector<pair<int,int>> a = {{1,3},{2,6},{8,10},{15,18}};

auto ans = mergeIntervals(a);

for(auto &p : ans)
cout << "[" << p.first << "," << p.second << "] ";

    return 0;
}

