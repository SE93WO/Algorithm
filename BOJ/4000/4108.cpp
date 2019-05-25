#include <bits/stdc++.h>
using namespace std;

const int dx[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
const int dy[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };

int main() {
	char maps[101][101];
	int r, c;

	while (true) {
		cin >> r >> c;
		if (r == 0 && c == 0) break;

		for (int i = 0; i < r; i++)
			for (int j = 0; j < c; j++)
				cin >> maps[i][j];

		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				if (maps[i][j] == '*') continue;
				int cnt = 0;
				for (int k = 0; k < 8; k++) {
					int x = i + dx[k];
					int y = j + dy[k];
					if (x < 0 || x >= r || y < 0 || y >= c) continue;
					if (maps[x][y] == '*') cnt++;
				}
				maps[i][j] = cnt + '0';
			}
		}
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				cout << maps[i][j];
			}
			cout << '\n';
		}
	}

	return 0;
}