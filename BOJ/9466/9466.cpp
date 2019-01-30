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

int t, n, cnt, team;
int arr[100001], check[100001];

void dfs(int now, int start) {
	if (check[now] > 0)
		return;

	check[now] = ++cnt;

	if (check[arr[now]] >= check[start])
		team += cnt - check[arr[now]] + 1;
	else
		dfs(arr[now], start);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> t;
	while (t--) {
		cin >> n;
		cnt = 0;
		team = 0;

		for (int i = 1; i <= n; i++) {
			check[i] = 0;
			cin >> arr[i];
		}

		for (int i = 1; i <= n; i++) {
			dfs(i, i);
		}

		cout << n - team << '\n';
	}

	return 0;
}