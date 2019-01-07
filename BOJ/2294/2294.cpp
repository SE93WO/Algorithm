#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, k, INF = 100001;
	int coin[101] = { 0, };
	int dp[10001] = { 0, };

	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> coin[i];
	}
	
	for (int i = 1; i <= k; i++) {
		dp[i] = INF;
		for (auto c : coin) {
			if (i - c >= 0)
				dp[i] = min(dp[i], dp[i - c] + 1);
		}
	}

	if (dp[k] >= INF) {
		cout << -1;
	}
	else
		cout << dp[k];
	
}