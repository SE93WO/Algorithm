#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <queue>
#include <vector>
#include <stack>
#include <deque>
#include <algorithm>

typedef long long ll;
using namespace std;

void solve(string A, string B, int diff) {
	int ans = 1e9;

	for (int i = 0; i <= B.size() - A.size(); i++) {
		int cnt = 0;
		for (int j = 0; j < A.size(); j++) {
			if (A[j] != B[j + i]) cnt++;
		}
		ans = min(cnt, ans);
	}
	cout << ans << '\n';
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string A, B;
	cin >> A >> B;

	int diff = B.size() - A.size();

	solve(A, B, diff);
}

