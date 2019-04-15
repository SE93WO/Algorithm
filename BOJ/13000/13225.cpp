#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int div(int n) {
	int cnt = 0;
	
	for (int i = 1; i * i <= n; i++) {
		if (n % i == 0) {
			cnt++;
			if (i * i < n) {
				cnt++;
			}
		}
	}

	return cnt;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);	
	
	int c, n;
	cin >> c;

	while (c--) {
		cin >> n;
		cout << n << " " << div(n) << endl;
	}
}