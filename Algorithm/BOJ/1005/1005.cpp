#include <cstdio>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int T;
	scanf("%d", &T);

	while (T--) {
		int N, K, W;
		int D[1000];
		int pre[1000] = { 0, };
		vector<int> suc[1000];
		
		scanf("%d %d", &N, &K);

		for (int i = 0; i < N; i++)
			scanf("%d", &D[i]);

		for (int i = 0; i < K; i++) {
			int X, Y;
			scanf("%d %d", &X, &Y);
			suc[X - 1].push_back(Y - 1);
			pre[Y - 1]++;
		}
		scanf("%d", &W);
		W--;

		int ans[1000] = { 0 };
		queue<int> que;

		for (int i = 0; i < N; i++) {
			if (!pre[i]) 
				que.push(i);
		}

		while (pre[W] > 0) {
			int u = que.front();
			que.pop();

			for (int next : suc[u]) {
				ans[next] = max(ans[next], ans[u] + D[u]);
				if (--pre[next] == 0)
					que.push(next);
			}
		}
		printf("%d\n", ans[W] + D[W]);
	}
}