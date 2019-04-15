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

long long dp[1000001];
const long long mod = 1000000009LL;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	dp[0] = 1;
	for (int i = 1; i <= 1000000; i++) {
		if (i - 1 >= 0)
			dp[i] += dp[i - 1];
		if (i - 2 >= 0)
			dp[i] += dp[i - 2];
		if (i - 3 >= 0)
			dp[i] += dp[i - 3];
		dp[i] %= mod;
	}

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		cout << dp[n] << '\n';
	}
}