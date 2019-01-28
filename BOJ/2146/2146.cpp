#include <iostream>
#include <cstring>
#include <queue>
#include <algorithm>

typedef long long ll;
using namespace std;

int n, c;
int m[101][101];
int disc[101][101];
int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };

bool check(int x, int y) {
	return x >= 0 && x < n && y >= 0 && y < n;
}

void dfs(int x, int y, int c) {
	disc[x][y] = true;
	m[x][y] = c;

	for (int i = 0; i < 4; i++) {
		int cx = x + dx[i];
		int cy = y + dy[i];
		if (check(cx, cy) && m[cx][cy] && !disc[cx][cy])
			dfs(cx, cy, c);
	}
}

int bfs(int c) {
	queue<pair<int, int>> que;
	memset(disc, 0, sizeof(disc));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (m[i][j] == c) {
				disc[i][j] = 1;
				que.push({ i, j });
			}
		}
	}

	int ret = 0;
	while (que.size()) {
		int size = que.size();
		while (size--) {
			int x = que.front().first;
			int y = que.front().second;
			que.pop();
			for (int i = 0; i < 4; i++) {
				int cx = x + dx[i];
				int cy = y + dy[i];

				if (!check(cx, cy))
					continue;
				if (m[cx][cy] != 0 && m[cx][cy] != c)
					return ret;
				if (m[cx][cy] == 0 && !disc[cx][cy]) {
					disc[cx][cy] = 1;
					que.push({ cx, cy });
				}
			}
		}
		ret++;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> m[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (m[i][j] && !disc[i][j])
				dfs(i, j, ++c);
		}
	}

	int r = 1e9;
	for (int i = 1; i <= c; i++) {
		r = min(r, bfs(i));
	}

	cout << r;
	return 0;
}