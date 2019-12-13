#include <iostream>
using namespace std;

int map[10001];
int dp[10001];
int n;

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> map[i];
	if (n == 1) {
		cout << "0";
		return 0;
	}

	for (int i = 1; i <= map[1] + 1; i++) dp[i] = 1;
	for (int i = 1; i <= n; i++) {
		if (dp[i + 1] == 0 && map[i] == 0) break;
		for (int j = i + 1; j <= i + map[i]; j++) {
			if (dp[j] == 0) dp[j] = dp[i] + 1;
		}
	}
	if (dp[n] == 0) cout << "-1";
	else cout << dp[n];
}