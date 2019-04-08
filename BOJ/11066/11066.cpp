#include <bits/stdc++.h>
using namespace std;

int dp[501][501];
int sum[501];
int arr[501];

int func(int start, int end) {
	if (start >= end) return 0;

	if (dp[start][end] != -1) return dp[start][end];

	if (end == start + 1) return arr[start] + arr[end];

	dp[start][end] = 1e9;

	for (int i = start; i <= end; i++) {
		int temp = func(start, i) + func(i + 1, end) + sum[end] - sum[start - 1];
		dp[start][end] = min(dp[start][end], temp);
	}

	return dp[start][end];
}

int main() {
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;

		for (int i = 1; i <= n; i++) {
			sum[i] = 0;
			for (int j = 1; j <= n; j++) {
				dp[i][j] = -1;
			}
		}

		for (int i = 1; i <= n; i++) {
			cin >> arr[i];
			sum[i] = sum[i - 1] + arr[i];
		}

		cout << func(1, n) << endl;
	}
}