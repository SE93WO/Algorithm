#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int main() {
	int n, m, k;
	cin >> n >> m >> k;
	
	while (k-- > 0) {
		if (m * 2 > n) {
			m--;
		}
		else
			n--;
	}

	cout << (m * 2 > n ? n / 2 : m);
}
