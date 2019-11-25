#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n, t, s;
	vector<pair<int, int>> vii;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> t >> s;
		vii.push_back({ s, t });
	}

	sort(vii.begin(), vii.end());

	int ans = vii[n-1].first;
	for (int i = vii.size() - 1; i >= 0; i--) {
		ans = min(ans, vii[i].first);
		ans -= vii[i].second;
	}
	
	if (ans >= 0) cout << ans;
	else cout << "-1";
}