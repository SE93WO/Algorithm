#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <queue>
#include <vector>
#include <stack>
#include <deque>
#include <algorithm>

typedef long long ll;
using namespace std;
vector<int> vi[101];
bool check[101];
int ans = 0;

void dfs(int node) {
	ans++;
	check[node] = true;
	for (int i = 0; i < vi[node].size(); i++) {
		int next = vi[node][i];
		if (check[next] == false) {
			dfs(next);
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;
	
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		vi[x].push_back(y);
		vi[y].push_back(x);
	}

	dfs(1);

	cout << ans - 1;
	return 0;
}