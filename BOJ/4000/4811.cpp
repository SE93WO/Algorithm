#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int n;
lli ans;
lli dp[31][31];
lli solve(int w, int h) {
	if (w < 0) return 0;
	if (w == 0 && h == 0) return 1;
	if (dp[w][h] > 0) return dp[w][h];
	if (w > 0) dp[w][h] += solve(w - 1, h + 1);
	if (h > 0) dp[w][h] += solve(w, h - 1);

	return dp[w][h];
}
int main() {
	int n;
	while (true) {
		cin >> n;
		if (n == 0) break;
		ans = 0;
		cout << solve(n, 0) << endl;
	}
}
