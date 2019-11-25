#include <iostream>
#include <algorithm>
using namespace std;

const int dx[] = { -1, 1, 0, 0 };
const int dy[] = { 0, 0, -1, 1 };

int r, c;
int map[21][21];
int alphabat[27];

int dfs(int x, int y, int lo) {
	int ret = 0;
	alphabat[map[x][y]] = 1;

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx >= 0 && nx < r && ny >= 0 && ny < c && alphabat[map[nx][ny]] == 0) {
			ret = max(ret, dfs(nx, ny, lo + 1));
		}
	}

	alphabat[map[x][y]] = 0;
	return ret + 1;
}

int main() {
	cin >> r >> c;

	char ch;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> ch;
			map[i][j] = ch - 'A';
		}
	}

	cout << dfs(0, 0, 1);
}