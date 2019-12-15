#include <iostream>
#include <algorithm>
using namespace std;

const int dx[] = { -1, 1, 0, 0};
const int dy[] = {0, 0, -1, 1};
int map[501][501];
int dp[501][501];
int n;

int dfs(int x, int y) {
    if (dp[x][y]) return dp[x][y];
    dp[x][y] = 1;
    for(int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(map[x][y] < map[nx][ny]) {
            dp[x][y] = max(dp[x][y], dfs(nx, ny) + 1);
        }
    }
    return dp[x][y];
}

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> map[i][j];
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            ans = max(ans, dfs(i, j));
        }
    }

    cout << ans;
}