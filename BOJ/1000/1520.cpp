#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int dx[] = { 0, 0, -1, 1 };
int dy[] = { -1, 1, 0, 0 };
int height, width;	
int arr[501][501], dp[501][501];

int func(int x, int y) {
	if (x == height && y == width) return 1;
	if (~dp[x][y]) return dp[x][y];
	dp[x][y] = 0;
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (arr[nx][ny] && arr[nx][ny] < arr[x][y])
			dp[x][y] += func(nx, ny);
	}
	return dp[x][y];
}

int main() {
	memset(dp, -1, sizeof(dp));
	cin >> height >> width;
	for (int i = 1; i <= height; i++) {
		for (int j = 1; j <= width; j++) {
			cin >> arr[i][j];
		}
	}

	cout << func(1, 1);
	
	return 0;
}
