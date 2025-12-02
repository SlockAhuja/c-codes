// 114) Graph : Search in a Maze
#include <iostream>
using namespace std;

int n = 4;
int maze[4][4] = {
    {1,0,0,0},
    {1,1,0,1},
    {0,1,0,0},
    {1,1,1,1}
};

bool dfs(int x, int y){
    if(x==n-1 && y==n-1) return 1;
    if(x<0 || y<0 || x>=n || y>=n || maze[x][y]!=1) return 0;
    maze[x][y] = -1; // mark visited
    return dfs(x+1,y) || dfs(x-1,y) || dfs(x,y+1) || dfs(x,y-1);
}

int main(){
    cout << (dfs(0,0) ? "Path Found" : "No Path");
    return 0;
}
