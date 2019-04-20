#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int max(int a, int b) {
	return (a > b) ? a : b;
}

string a, b;
int dp[1001][1001];

int main() {
	cin >> a >> b;
	for (int i = 1; i <= a.size(); i++) {
		for (int j = 1; j <= b.size(); j++) {
			if (a[i - 1] == b[j - 1]) {
				dp[i][j] = dp[i - 1][j - 1] + 1;
			}
			else {
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
	}

	cout << dp[a.size()][b.size()] << endl;

	int i = a.size();
	int j = b.size();
	string ans = "";
	while (dp[i][j] != 0) {
		if (dp[i][j] == dp[i - 1][j]) {
			i--;
		}
		else if (dp[i][j] == dp[i][j - 1]) {
			j--;
		}
		else {
			ans = a[i - 1] + ans;
			i--;
			j--;
		}
	}

	cout << ans << endl;
}
