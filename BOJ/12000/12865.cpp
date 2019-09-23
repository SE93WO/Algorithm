#include <iostream>
#include <algorithm>
using namespace std;

int n, k;
int dp[100001];
int w[101];
int v[101];

void solve() {
	for (int i = 1; i <= n; i++) {
		for (int j = k; j >= 1; j--) {
			if (w[i] <= j) {
				dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
			}
		}
	}
	cout << dp[k] << endl;
}
int main() {
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		cin >> w[i] >> v[i];
	}
	solve();
}