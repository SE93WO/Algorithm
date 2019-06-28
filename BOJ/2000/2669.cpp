#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int main() {
	int arr[101][101] = { 0, };
	int x_1, y_1, x_2, y_2;

	int ans = 0;
	for (int i = 0; i < 4; i++) {
		cin >> x_1 >> y_1 >> x_2 >> y_2;
		for (int j = x_1; j < x_2; j++) {
			for (int k = y_1; k < y_2; k++) {
				if (arr[j][k] != 1) {
					arr[j][k] = 1;
					ans++;
				}
			}
		}
	}

	cout << ans;
}
