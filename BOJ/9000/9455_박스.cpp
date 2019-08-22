#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int main() {
	int t, m, n;
	cin >> t;
	while (t--) {
		int arr[101][101] = { 0, };
		int cnt = 0;
		cin >> m >> n;

		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				cin >> arr[j][i];
			}
		}

		int flag = 0;
		for (int i = 0; i < n; i++) {
			flag = m - 1;
			for (int j = m - 1; j >= 0; j--) {
				if (j == m - 1 && arr[i][j] == 1) {
					flag--;
				}
				else if (arr[i][j] == 1) {
					cnt += flag - j;
					flag--;
				}
			}
		}
		
		cout << cnt << endl;
	}
}
