#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int main() {
	int n, m, ans = 0;
	int arr[501][501] = { 0, };
	int visit[501] = { 0, };

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			arr[i][j] = 1e9;
		}
	}

	while (m--) {
		int a, b;
		cin >> a >> b;
		arr[a][b] = 1;
	}

	for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (arr[i][j] > arr[i][k] + arr[k][j])
					arr[i][j] = arr[i][k] + arr[k][j];
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (arr[i][j] != 1e9) {
				visit[i]++;
				visit[j]++;
				if (visit[i] == n - 1) ans++;
				if (visit[j] == n - 1) ans++;
			}
		}
	}

	cout << ans;
}