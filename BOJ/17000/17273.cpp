#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int main() {
	int m, n, a, b;
	bool check = true;
	cin >> n >> m >> a >> b;
	int ans = a;
	while (m--) {
		int input;
		cin >> input;
		if (ans > input) continue;
		ans = check ? b : a;
		check = !check;
	}
	cout << ans;
}
