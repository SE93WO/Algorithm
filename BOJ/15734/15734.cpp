#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);	
	
	int l, r, a;
	cin >> l >> r >> a;

	int x = abs(l - r);
	if (x < a) {
		x = a - x;
		if (x % 2 == 0)
			cout << l + r + a;
		else
			cout << l + r + a - 1;
	}
	else
		cout << l + r + a - abs(a - x);
}