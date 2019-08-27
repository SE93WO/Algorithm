#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int main() {
	while (true) {
		int rectangle, ans = 0;
		cin >> rectangle;
		if (rectangle == 0) break;
		for (int i = 1; i <= rectangle; i++) {
			ans += (i * i);
		}
		cout << ans << endl;
	}
}
