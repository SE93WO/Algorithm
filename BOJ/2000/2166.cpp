#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<pair<ll, ll>> p(n);
	for (int i = 0; i < n; i++) {
		cin >> p[i].first >> p[i].second;
	}
	ll ans = 0;

	for (int i = 0; i < n; ++i) {
		if (i == n - 1) ans += (p[i].first * p[0].second) - (p[0].first * p[i].second);
		else ans += (p[i].first * p[i + 1].second) - (p[i + 1].first * p[i].second);
	}

	ans = abs(ans);
	cout << ans / 2 << ".";
	if (ans % 2 == 0) cout << "0";
	else cout << "5";
}