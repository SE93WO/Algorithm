#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

const int MAX = 101;
const int dx[] = { 0, 0, -1, 1 };
const int dy[] = { -1, 1, 0, 0 };

int n, ans;
int map[MAX][MAX];
bool visit[MAX][MAX];

void dfs(int x, int y, int h) {
	visit[x][y] = 1;

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx < 0 || ny < 0 || nx >= n || ny >= n) continue;
		if (map[nx][ny] > h && !visit[nx][ny]) dfs(nx, ny, h);
	}
}

int main() {
	cin >> n;
	int nMax = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j];
			nMax = max(map[i][j], nMax);
		}
	}

	for (int h = 0; h <= nMax; h++) {
		int safe = 0;
		memset(visit, 0, sizeof(visit));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (map[i][j] > h && !visit[i][j]) {
					dfs(i, j, h);
					safe++;
				}
			}
		}
		ans = max(ans, safe);
	}
	cout << ans;
}