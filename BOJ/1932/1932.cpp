#include <iostream>
#include <algorithm>
using namespace std;

int dp[501][501];

int main() {
	int n, ans = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cin >> dp[i][j];
			if (i != 0 && j != 0)
				dp[i][j] += max(dp[i - 1][j - 1], dp[i - 1][j]);
			else if (i != 0 && j == 0)
				dp[i][j] += dp[i - 1][j];

			if (ans < dp[i][j])
				ans = dp[i][j];
		} 
	}

	cout << ans;
}
