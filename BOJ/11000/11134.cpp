#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, c;
	cin >> t;
	while (t--) {
		cin >> n >> c;
		int cnt = 0;

		if (n % c == 0)
			cout << (n / c) << endl;
		else
			cout << (n / c) + 1 << endl;
	}

	return 0;
}
