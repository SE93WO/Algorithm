#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int main() {
	int n;
	int dp[10000001] = { 1, 1 };
	cin >> n;
	for (int i = 2; i <= n; i++) {
		dp[i] = (dp[i - 1] + dp[i - 2]) % 10;
	}
	cout << dp[n];
}
