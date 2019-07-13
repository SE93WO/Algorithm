#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;
#define mod 15746

int dp[1000001] = { 0, };
int main() {
	int n;
	cin >> n;
	dp[1] = 1;
	dp[2] = 2;

	for (int i = 3; i <= n; i++) {
		dp[i] += dp[i - 1] + dp[i - 2];
		dp[i] %= mod;
	}

	cout << dp[n];
}