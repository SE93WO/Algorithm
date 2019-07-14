#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int main() {
	int p, l, v, cnt = 1;
	while (cin >> p >> l >> v) {
		if (p == 0 && l == 0 && v == 0) break;
		printf("Case %d: %d\n", cnt++, v / l * p + (v % l < p ? v % l : p));
	}
}
