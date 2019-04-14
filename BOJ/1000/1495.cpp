#include <bits/stdc++.h>
using namespace std;

int volume[101];
int dp[101][1001];

int main() {
	int n, s, m, ans = -1;

	cin >> n >> s >> m;
	for (int i = 1; i <= n; i++) {
		cin >> volume[i];
	}

	dp[0][s] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= m; j++) {
			if (dp[i - 1][j]) {
				if (j - volume[i] >= 0)
					dp[i][j - volume[i]] = 1;
				if (j + volume[i] <= m)
					dp[i][j + volume[i]] = 1;
			}
		}
	}

	for (int i = 0; i <= m; i++) {
		if (dp[n][i])
			ans = i;
	}

	cout << ans;

	return 0;
}