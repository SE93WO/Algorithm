#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, m, ans = 0;
vector<int> vi;

int main() {
	cin >> n;
	vi.push_back(-1e9);
	for (int i = 0; i < n; i++) {
		cin >> m;
		if (vi.back() < m) {
			vi.push_back(m);
			ans++;
		}
		else {
			auto it = lower_bound(vi.begin(), vi.end(), m);
			*it = m;
		}
	}
	cout << ans;
	return 0;
}