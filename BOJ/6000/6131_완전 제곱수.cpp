#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int main() {
	int n, ans = 0;
	cin >> n;
	for (int i = 1; i <= 500; i++) {
		for (int j = 1; j < i; j++) {
			if (i * i == j * j + n) {
				ans++;
			}
		}
	}
	cout << ans;

	return 0;
}
