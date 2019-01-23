#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <queue>
#include <vector>
#include <tuple>
#include <map>
#include <tuple>
#include <stack>
#include <deque>
#include <algorithm>

typedef long long ll;
using namespace std;

int t, n;
vector<int> vi;
vector<bool> check;

void dfs(int now) {
	check[now] = true;

	if (!check[vi[now]])
		dfs(vi[now]);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> t;
	while (t--) {
		cin >> n;
		vi = vector<int>(n + 1);
		check = vector<bool>(n + 1, false);

		for (int i = 1; i <= n; i++) {
			cin >> vi[i];
		}

		int ans = 0;

		for (int i = 1; i <= n; i++) {
			if (!check[i]) {
				ans++;
				dfs(i);
			}
		}

		cout << ans << '\n';
	}
}