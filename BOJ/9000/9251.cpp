#include <bits/stdc++.h>
using namespace std;
#define max(x, y) ((x) < (y) ? (y) : (x))
int dp[1001][1001];
int main() {
	string a, b;
	cin >> a >> b;

	dp[0][0] = (a[0] == b[0]);
	for (int i = 1; i < a.size(); i++) {
		dp[i][0] = max(dp[i - 1][0], (a[i] == b[0]));
	}

	for (int i = 1; i < b.size(); i++) {
		dp[0][i] = max(dp[0][i - 1], (a[0] == b[i]));
	}

	for (int i = 1; i < a.size(); i++) {
		for (int j = 1; j < b.size(); j++) {
			if (a[i] == b[j]) { 
				dp[i][j] = dp[i - 1][j - 1] + 1;
			}
			else { 
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
	}

	cout << dp[a.size() - 1][b.size() - 1] << endl;
}