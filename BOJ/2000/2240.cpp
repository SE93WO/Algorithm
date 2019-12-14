#include <iostream>
#include <algorithm>
using namespace std;

int dp[1001][31][2];
int arr[1001];

int main() {
	int t, w;
	cin >> t >> w;
	for (int i = 1; i <= t; i++) {
		cin >> arr[i];
		arr[i]--;
	}

	dp[0][0][0] = 0;
	dp[0][0][1] = 0;
	for (int i = 1; i <= t; i++) {
		dp[i][0][0] = dp[i - 1][0][0] + (arr[i] == 0);
		for (int j = 1; j <= w; j++) {
			if (i < j) continue;
			if (j % 2 == 0) dp[i][j][0] = max(dp[i - 1][j - 1][1], dp[i - 1][j][0]) + (arr[i] == 0);
			else dp[i][j][1] = max(dp[i - 1][j - 1][0], dp[i - 1][j][1]) + (arr[i] == 1);\
		}
	}
	int nmax = 0;
	for (int j = 0; j <= w; j++) {
		nmax = max(nmax, dp[t][j][0]);
		nmax = max(nmax, dp[t][j][1]);
	}
	cout << nmax;
}