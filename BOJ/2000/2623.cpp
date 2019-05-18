#include <bits/stdc++.h>
using namespace std;

int n, m, k, x, y, cycle, visited[1001], finish[1001];
vector<vector<int>> vvi;
stack<int> st;

void dfs(int here) {
	visited[here] = true;
	for (auto there : vvi[here]) {
		if (!visited[there])
			dfs(there);
		else if (!finish[there])
			cycle = 1;
	}
	finish[here] = true;
	st.push(here);
}

int main() {
	cin >> n >> m;
	vvi.resize(n + 1);
	for (int i = 0; i < m; i++) {
		cin >> k;
		for (int j = 0; j < k; j++) {
			if (!j)
				cin >> x;
			else {
				cin >> y;
				vvi[x].push_back(y);
				x = y;
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		if (!visited[i])
			dfs(i);
	}
	if (cycle) {
		cout << "0";
	}
	else {
		while (st.size()) {
			cout << st.top() << endl;
			st.pop();
		}
	}

	return 0;
}