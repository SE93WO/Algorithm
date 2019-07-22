#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
		char arr[11][11] = { 0, };
		cin >> n;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
					arr[i][j] = '#';
				}
				else
					arr[i][j] = 'J';
			}
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << arr[i][j];
			}
			cout << endl;
		}
		cout << endl;
	}
}
