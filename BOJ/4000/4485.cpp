#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
int matrix[126][126];
int dist[126][126];
int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };

struct Vertex {
	int x, y, dist;
	bool operator < (const Vertex& v) const {
		return dist > v.dist;
	}
};

int main() {
	int t = 0;
	while (++t) {
		cin >> n;
		if (n == 0) break;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				cin >> matrix[i][j];
				dist[i][j] = 1e9;
			}
		}
		dist[1][1] = matrix[1][1];
		priority_queue<Vertex> pq;
		pq.push({ 1, 1, dist[1][1] });
		while (!pq.empty()) {
			Vertex curVertex = pq.top();
			pq.pop();
			for (int i = 0; i < 4; i++) {
				int now_x = curVertex.x + dx[i];
				int now_y = curVertex.y + dy[i];
				if (now_x < 1 || now_x > n || now_y < 1 || now_y > n) continue;
				if (dist[now_x][now_y] > dist[curVertex.x][curVertex.y] + matrix[now_x][now_y]) {
					dist[now_x][now_y] = dist[curVertex.x][curVertex.y] + matrix[now_x][now_y];
					pq.push({ now_x, now_y, dist[now_x][now_y]});
				}
			}
		}
		cout << "Problem " << t << ": " << dist[n][n] << '\n';
	}

	return 0;
}