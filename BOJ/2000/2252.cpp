#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<vector<int>> vvi;
stack<int> st;
int n, m, x, y, visited[32001];

void dfs(int v) {
	visited[v] = true;
	for (auto i : vvi[v]) {
		if (visited[i])
			continue;
		dfs(i);
	}
	st.push(v);
}

int main() {
	cin >> n >> m;
	vvi.resize(n + 1);
	for (int i = 0; i < m; i++) {
		cin >> x >> y;
		vvi[x].push_back(y);
	}

	for (int i = 1; i <= n; i++) {
		if (!visited[i])
			dfs(i);
	}

	while (st.size()) {
		cout << st.top() << " ";
		st.pop();
	}
	return 0;
}