#include <bits/stdc++.h>
using namespace std;

int edge[101][101];
int ans[101][101] = { 0, };
int n;

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> edge[i][j];
		}
	}

	for (int st = 1; st <= n; st++) {
		int visited[101] = { 0, };
		queue<int> que;
		que.push(st);
		while (!que.empty()) {
			int cur = que.front();
			que.pop();
			for (int i = 1; i <= n; i++) {
				if (edge[cur][i] && !visited[i]) {
					que.push(i);
					ans[st][i] = 1;
					visited[i] = true;
				}
			}
		}
	}
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << ans[i][j] << " ";
		}
		cout << '\n';
	}

	return 0;
}