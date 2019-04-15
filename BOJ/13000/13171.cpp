#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define mod 1000000007
int main() {
	ll a, x, ans = 1;
	cin >> a >> x;

	a %= mod;
	while (x ) {
		if (x & 1)
			ans = (ans * a) % mod;
		a = (a * a) % mod;
		x >>= 1;
	}

	cout << ans;
	return 0;
}