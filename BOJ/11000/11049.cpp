#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int matrix[501][2] = { 0, };
int dp[501][501] = { 0, };
int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> matrix[i][0] >> matrix[i][1];
	}

	for (int i = n; i > 0; i--) {
		for (int j = i + 1; j <= n; j++) {
			dp[i][j] = numeric_limits<int>::max();
			for (int k = i; k <= j; k++) {
				dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + (matrix[i][0] * matrix[k][1] * matrix[j][1]));
			}
		}
	}

	cout << dp[1][n];
}