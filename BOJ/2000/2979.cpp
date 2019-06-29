#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c;
	int x, y;
	int ans = 0;
	int truck[101] = { 0, };
	cin >> a >> b >> c;

	for (int i = 0; i < 3; i++) {
		cin >> x >> y;
		
		for (int j = x; j < y; j++) {
			truck[j]++;
		}
	}

	for (int i = 1; i <= 100; i++) {
		if (truck[i] == 1)
			ans += a;
		else if (truck[i] == 2)
			ans += (b * 2);
		else if (truck[i] == 3)
			ans += (c * 3);
	}
	
	cout << ans;
	return 0;
}
