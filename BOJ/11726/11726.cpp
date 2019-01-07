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

int dp[1001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	dp[0] = 1;
	dp[1] = 1;
	int n;
	cin >> n;

	for (int i = 2; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
		dp[i] %= 10007;
	}

	cout << dp[n];
}