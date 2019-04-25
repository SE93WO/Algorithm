#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int dp[1000001], res[1000001];

int solve(int n) {
	int& ret = dp[n];
	if (ret != -1) return ret;
	if (n == 1) return ret = 0;

	ret = solve(n - 1) + 1;
	if (n % 3 == 0 && ret > solve(n / 3) + 1) {
		ret = solve(n / 3) + 1;
		res[n] = 1;
	}
	if (n % 2 == 0 && ret > solve(n / 2) + 1) {
		ret = solve(n / 2) + 1;
		res[n] = 2;
	}
	return ret;
}

int main() {
	int n;
	cin >> n;
	fill(dp, dp + n + 1, -1);
	cout << solve(n) << endl;
	while (n > 1) {
		cout << n << " ";
		switch (res[n]) {
		case 0: n--; break;
		case 1: n /= 3; break;
		default: n /= 2;
		}
	}
	cout << 1;
}