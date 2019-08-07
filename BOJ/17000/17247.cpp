#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int main() {
	int arr[1001][1001] = { 0, };
	int n, m;
	int x1, x2, y1, y2;
	bool first = true;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 1 && first) {
				x1 = i;
				y1 = j;
				first = false;
			}
			else if (arr[i][j] == 1 && !first) {
				x2 = i;
				y2 = j;
			}
		}
	}
	cout << abs(x2 - x1) + abs(y2 - y1);
}
