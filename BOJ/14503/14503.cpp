#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <queue>
#include <vector>
#include <stack>
#include <deque>
#include <algorithm>

typedef long long ll;
using namespace std;

int n, m, x, y, d;
int cnt = 1;
int map[51][51];
int dx[] = { -1, 0, 1, 0 };
int dy[] = { 0, 1, 0, -1 };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> n >> m;
	cin >> x >> y >> d;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
		}
	}

	while (true) {
		bool flag = true;
		map[x][y] = 2;
		for (int k = 0; k < 4; k++) {
			d = (d + 3) % 4;
			int nx = x + dx[d];
			int ny = y + dy[d];
			if (nx >= 0, nx < n && ny >= 0 && ny < m) {
				if (map[nx][ny] == 0) {
					flag = false;
					x = nx;
					y = ny;
					cnt++;
					break;
				}
			}
		}
		if (flag) {
			x = x - dx[d];
			y = y - dy[d];
			if (map[x][y] == 1) break;
		}
	}
	cout << cnt;
}