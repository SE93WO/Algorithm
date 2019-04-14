#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	int arr[100001];

	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			int x, y;
			cin >> x >> y;
			arr[x] = y;
		}

		int ans = 0;
		int temp = 1e9;

		for (int i = 1; i <= n; i++) {
			if (temp > arr[i]) {
				ans++;
				temp = arr[i];
			}
		}
		cout << ans << endl;
	}
	return 0;
}