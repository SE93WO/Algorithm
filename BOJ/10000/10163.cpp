#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int main() {
	int n;
	int x_1, x_2, y_1, y_2;
	int arr[101][101] = { 0, };
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> x_1 >> y_1 >> x_2 >> y_2;
		for (int j = x_1; j < x_1 + x_2; j++) {
			for (int k = y_1; k < y_1 + y_2; k++) {
				arr[j][k] = i;
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		int cnt = 0;
		for (int j = 0; j <= 100; j++) {
			for (int k = 0; k <= 100; k++) {
				if (arr[j][k] == i)
					cnt++;
			}
		}
		cout << cnt << endl;
	}
}
