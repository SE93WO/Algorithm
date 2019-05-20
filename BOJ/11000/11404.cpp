#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, arr[101][101] = { 0, };
	cin >> n >> m;
	while (m--) {
		int a, b, c;
		cin >> a >> b >> c;
		if (!arr[a][b]) arr[a][b] = c;
		else arr[a][b] = min(arr[a][b], c);
	}

	for (int chk = 1; chk <= n; chk++) {
		for (int st = 1; st <= n; st++) {
			for (int en = 1; en <= n; en++) {
				if (st == en) continue;
				if (arr[st][chk] == 0 || arr[chk][en] == 0) continue;
				if (arr[st][en] == 0) arr[st][en] = arr[st][chk] + arr[chk][en];
				else arr[st][en] = min(arr[st][en], arr[st][chk] + arr[chk][en]);
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}