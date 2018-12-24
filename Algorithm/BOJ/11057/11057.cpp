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

long long dp[1001][10];
long long mod = 10007;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	for (int i = 0; i <= 9; i++) dp[1][i] = 1;
	
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= 9; j++) {
			for (int k = 0; k <= j; k++) {
				dp[i][j] += dp[i - 1][k];
				dp[i][j] %= mod;
			}
		}
	}

	long long ans = 0;
	for (int i = 0; i < 10; i++) {
		ans += dp[n][i];
	}
	ans %= mod;
	cout << ans;
}