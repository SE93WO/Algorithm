#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int main() {
	int n, rope[1000001], ans = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> rope[i];
	}
	sort(rope, rope + n, greater<int>());
	for (int i = 1; i <= n; i++) {
		ans = max(ans, rope[i - 1] * i);
	}
	cout << ans;
}