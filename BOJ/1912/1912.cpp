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


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	vector<int> vi(n);
	vector<int> dp(n);

	for (int i = 0; i < n; i++) {
		cin >> vi[i];
	}

	for (int i = 0; i < n; i++) {
		dp[i] = vi[i];
		if (i == 0) continue;
		if (dp[i] < dp[i - 1] + vi[i]) {
			dp[i] = dp[i - 1] + vi[i];
		}
	}

	int ans = dp[0];
	for (int i = 1; i < n; i++) {
		if (ans < dp[i]) {
			ans = dp[i];
		}
	}
	cout << ans;
}