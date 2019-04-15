#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int k, n, m;
	cin >> k >> n >> m;
	if (m - (k * n) < 0)
		cout << abs(m - (k * n));
	else
		cout << 0;
}