#include <iostream>
using namespace std;

const int mod = 1e9;
int dp[101][11];

int main() {
	int N = 0;
	long long ans = 0;
	cin >> N;

	for (int i = 1; i <= 9; i++)
		dp[1][i] = 1;
	for (int i = 2; i <= N; i++)
		for (int j = 0; j <= 9; j++)
			if (j >= 1 && j <= 8)
				dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % mod;
			else if (j == 0)
				dp[i][j] = dp[i - 1][j + 1];
			else if (j == 9)
				dp[i][j] = dp[i - 1][j - 1];


	for (int i = 0; i <= 9; i++)
		ans = (ans + dp[N][i]) % mod;

	cout << ans;
}