// 115) Graph : flood fill algo
#include <iostream>
using namespace std;

int n = 4, m = 4;
int grid[4][4] = {
    {1,1,0,0},
    {1,1,0,0},
    {0,0,1,0},
    {0,0,0,1}
};

void floodFill(int x, int y, int prevC, int newC){
    if(x<0||y<0||x>=n||y>=m||grid[x][y]!=prevC) return;
    grid[x][y] = newC;
    floodFill(x+1,y,prevC,newC);
    floodFill(x-1,y,prevC,newC);
    floodFill(x,y+1,prevC,newC);
    floodFill(x,y-1,prevC,newC);
}

int main(){
    int x=0, y=0, newC=2;
    floodFill(x,y,grid[x][y],newC);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) cout << grid[i][j] << " ";
        cout << "\n";
    }
    return 0;
}
