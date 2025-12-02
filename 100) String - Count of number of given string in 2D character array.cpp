//100) String : Count of number of given string in 2D character array
#include <iostream>
#include <vector>
using namespace std;

int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};

int main() {
    int n,m;
    cin>>n>>m;

    vector<vector<char>> a(n, vector<char>(m));
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>a[i][j];

    string w;
    cin>>w;

    int ans=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]!=w[0]) continue;

            for(int d=0; d<4; d++){
                int x=i, y=j, k=0;

                while(k < w.size() && 
                      x>=0 && y>=0 && x<n && y<m &&
                      a[x][y]==w[k])
                {
                    x += dx[d];
                    y += dy[d];
                    k++;
                }

                if(k == w.size()) ans++;
            }
        }
    }

    cout<<ans;
}
