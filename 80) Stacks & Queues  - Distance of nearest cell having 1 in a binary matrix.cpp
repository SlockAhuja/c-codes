//80) Stacks & Queues  : Distance of nearest cell having 1 in a binary matrix. 

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> nearestOne(vector<vector<int>>& g) {
int n = g.size(), m = g[0].size();
vector<vector<int>> d(n, vector<int>(m, -1));
queue<pair<int,int>> q;

// push all 1s
for(int i=0;i<n;i++)
for(int j=0;j<m;j++)
if(g[i][j]==1)
q.push({i,j}), d[i][j]=0;

int dx[4]={-1,0,1,0}, dy[4]={0,1,0,-1};

while(!q.empty()){
auto [x,y]=q.front(); q.pop();
for(int k=0;k<4;k++){
int nx=x+dx[k], ny=y+dy[k];
if(nx>=0 && ny>=0 && nx<n && ny<m && d[nx][ny]==-1){
d[nx][ny]=d[x][y]+1;
q.push({nx,ny});
            }
        }
    }
    return d;
}

int main() {
vector<vector<int>> g={{0,0,1},{0,1,0},{0,0,0}};
auto ans = nearestOne(g);

for(auto &r : ans){
for(int x : r) cout<<x<<" ";
cout<<endl;
    }
}
