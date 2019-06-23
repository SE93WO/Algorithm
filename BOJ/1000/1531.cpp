#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int main() {
	int n, m;
	int arr[101][101] = { 0, };
	int x_1, y_1, x_2, y_2;

	cin >> n >> m;
	while (n--) {
		cin >> x_1 >> y_1 >> x_2 >> y_2;
		for (int i = x_1; i <= x_2; i++) {
			for (int j = y_1; j <= y_2; j++) {
				arr[i][j]++;
			}
		}
	}

	int cnt = 0;
	for (int i = 0; i < 101; i++) {
		for (int j = 0; j < 101; j++) {
			if (arr[i][j] > m)
				cnt++;
		}
	}

	cout << cnt;
}
