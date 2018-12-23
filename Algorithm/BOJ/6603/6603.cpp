#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <vector>
#include <stack>
#include <deque>
#include <algorithm>

typedef long long ll;
using namespace std;

vector<int> lotto;
void solve(vector<int> &vi, int index, int cnt) {
	if (cnt == 6) {
		for (auto ans : lotto)
			cout << ans << " ";
		cout << '\n';
		return;
	}

	int size = vi.size();
	if (size == index) return;
	lotto.push_back(vi[index]);
	solve(vi, index + 1, cnt + 1);
	lotto.pop_back();
	solve(vi, index + 1, cnt);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	while (true, cin >> n) {
		if (n == 0) break;

		vector<int> vi(n);
		for (int i = 0; i < n; i++) {
			cin >> vi[i];
		}

		solve(vi, 0, 0);
		cout << '\n';
	}
}