#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int alphabat[26] = { 0, };
int ans = 0;

void solve(int n, int p) {
	if (n == 0) {
		ans += 1;
		return;
	}

	for (int i = 0; i < 26; i++) {
		if (alphabat[i] > 0 && i != p) {
			alphabat[i] -= 1;
			solve(n - 1, i);
			alphabat[i] += 1;
		}
	}
}
int main() {
	string str;
	cin >> str;

	for (int i = 0; i < str.size(); i++) {
		alphabat[str[i] - 'a']++;
	}

	solve(str.size(), -1);
	cout << ans;
}
