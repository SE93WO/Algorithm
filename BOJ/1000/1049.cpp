#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, x, y;
	int min_x, min_y = 1e9;

	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> x >> y;
		min_x = min(x, min_x);
		min_y = min(y, min_y);
	}

	if (min_x > min_y * 6) {
		min_x = min_y * 6;
	}

	if((n % 6) * min_y > min_x)
		cout << ((n / 6) * min_x) + min_x;
	else
		cout << ((n / 6) * min_x) + ((n % 6) * min_y);

	return 0;
}