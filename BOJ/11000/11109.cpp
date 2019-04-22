#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int d, n, s, p;
		cin >> d >> n >> s >> p;
		if (d + n * p > s * n)
			cout << "do not parallelize\n";
		else if (d + n * p < s * n)
			cout << "parallelize\n";
		else
			cout << "does not matter\n";
	}
}
