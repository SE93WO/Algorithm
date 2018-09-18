#include <iostream>
using namespace std;

typedef long long ll;
int gcd(ll a, ll b) {
	if (a == b)
		return a;

	if (a > b)
		return gcd(a - b, b);
	return gcd(a, b - a);
}

int lcm(ll a, ll b) {
	return (a * b) / gcd(a, b);
}

int main() {
	int n;
	ll a, b;
	cin >> n;
	while (n--) {
		cin >> a >> b;
		cout << lcm(a, b) << endl;
	}
}