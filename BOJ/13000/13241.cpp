#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int gcd(ll a, ll b) {
	ll mod = 0;
	while ((mod = a % b)) {
		a = b;
		b = mod;
	}
	return b;
}
int main() {
	ll ans = 0;
	ll a, b;
	cin >> a >> b;
	cout << a * b / gcd(a, b);
}
