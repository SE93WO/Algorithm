#include <iostream>
using namespace std;

int n, m, arr[101][101];
int main() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		arr[a][b] = 1;
	}

	for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (arr[i][k] && arr[k][j]) arr[i][j] = 1;
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		int ans = -1;
		for (int j = 1; j <= n; j++) {
			if (!arr[i][j] && !arr[j][i]) ans++;
		}
		cout << ans << endl;
	}
}