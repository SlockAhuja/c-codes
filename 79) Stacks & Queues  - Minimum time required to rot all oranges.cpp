//79) Stacks & Queues  : Minimum time required to rot all oranges
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int orangesRotting(vector<vector<int>>& grid) {
int n = grid.size(), m = grid[0].size();
queue<pair<int,int>> q;
int fresh = 0, time = 0;
 // Push all initially rotten oranges
for (int i = 0; i < n; i++) {
for (int j = 0; j < m; j++) {
if (grid[i][j] == 2) q.push({i, j});
if (grid[i][j] == 1) fresh++;
        }
    }

// Directions: up, right, down, left
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

while (!q.empty() && fresh > 0) {
int size = q.size();
time++;

while (size--) {
auto [x, y] = q.front();
q.pop();

for (int k = 0; k < 4; k++) {
int nx = x + dx[k], ny = y + dy[k];

if (nx >= 0 && ny >= 0 && nx < n && ny < m && grid[nx][ny] == 1) {
grid[nx][ny] = 2;
fresh--;
q.push({nx, ny});
                }
            }
        }
    }
return (fresh == 0) ? time : -1;
}

int main() {
vector<vector<int>> grid = {
        {2,1,1},
        {1,1,0},
        {0,1,1}
    };
cout << "Minimum time to rot all oranges: "
 << orangesRotting(grid);
}
