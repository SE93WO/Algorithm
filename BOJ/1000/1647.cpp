#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

typedef struct kruskal {
	int from;
	int to;
	int val;
}KS;

vector<KS> edge;

int parent[100001];
int res;
int n, m;
bool chk;

bool comp(KS d1, KS d2) {
	return d1.val < d2.val;
}

int find(int u) {
	if (u == parent[u]) return u;
	return parent[u] = find(parent[u]);
}

void merge(int u, int v) {
	chk = false;
	u = find(u);
	v = find(v);

	if (u == v) return;

	parent[u] = v;
	chk = true;
	n--;
}

int main() {
	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		parent[i] = i;
	}
	for (int i = 0; i < m; i++) {
		KS ks;
		cin >> ks.from >> ks.to >> ks.val;
		edge.push_back(ks);
	}
	sort(edge.begin(), edge.end(), comp);
	for (int i = 0; i < m; i++) {
		if (n == 2) break;
		merge(edge[i].from, edge[i].to);
		if (chk) res += edge[i].val;
	}
	cout << res;
}