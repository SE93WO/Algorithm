#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <queue>
#include <vector>
#include <vector>
#include <map>
#include <stack>
#include <deque>
#include <algorithm>

typedef long long ll;
using namespace std;

ll n, p, q;
map<ll, ll> m;

ll rec(ll nn) {
	if (nn == 0) 
		return 1;
	if (m[nn])
		return m[nn];
	return m[nn] = rec(nn / p) + rec(nn / q);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> p >> q;
	cout << rec(n);
}