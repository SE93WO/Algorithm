#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int main() {
	double m, a, b;
	while (true) {
		cin >> m >> a >> b;
		if (m == 0 && a == 0 && b == 0) break;
		int sec = (int)((m / a - m / b) * 3600 + 0.5);
		printf("%0d:%02d:%02d\n", sec / 3600, sec % 3600 / 60, sec % 60);
	}
}
