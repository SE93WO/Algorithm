#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);	

	int t, n, m;
	cin >> t;

	while (t--) {
		int cnt = 0;
		cin >> n >> m;
		for (int i = 1; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				if ((i * i + j * j + m) % (i * j) == 0)
					cnt++;
			}
		}
		cout << cnt << endl;
	}
}