#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int n, ans = 0;
vector<pair<int, int>> vii[10001];

int dfs(int s) {
	int x = 0, y = 0, sum;
	for (auto i : vii[s]) {
		sum = dfs(i.first) + i.second;
		if (sum > x) {
			y = x;
			x = sum;
		}
		else if (sum > y) y = sum;
	}
	if (ans < (x + y)) ans = x + y;
	return x;
}

int main() {
	cin >> n;
	for(int i = 1; i < n; i++) {
		int x, y, z;
		cin >> x >> y >> z;
		vii[x].push_back(make_pair(y, z));
	}

	dfs(1);

	cout << ans;
}