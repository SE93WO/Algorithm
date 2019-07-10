#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int main() {
	int n, m;
	int a, b;
	cin >> n >> m;
	vector<int> vi(n + 1, 0);

	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		vi[a]++;
		vi[b]++;
	}

	for (int i = 1; i <= n; i++) {
		cout << vi[i] << '\n';
	}
}
