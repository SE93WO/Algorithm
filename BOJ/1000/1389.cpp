#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
typedef long long ll;

int n, m, arr[101][101], visit[101][101];
int main() {
	cin >> n >> m;
	int x, y;
	for(int i = 0; i < m; i++) {
		cin >> x >> y;
		arr[x][y] = arr[y][x] = 1;
	}

	int min = 1e9, ans = 0;
	queue<int> que;
	for (int i = 1; i < n + 1; i++) {
		que.push(i);
		visit[i][i] = true;

		int temp = 0;
		while (!que.empty()) {
			int now = que.front();
			que.pop();
			
			for(int j = 1; j < n + 1; j++) {
				if (!visit[i][j] && arr[now][j] == 1) {
					que.push(j);
					arr[i][j] = arr[i][now] + arr[now][j];
					visit[i][j] = true;
					temp += arr[i][j];
				}
			}
		}
		if (temp < min) {
			min = temp;
			ans = i;
		}
	}
	cout << ans;
}