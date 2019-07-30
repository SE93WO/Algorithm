#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, ai, bi, a = 0, b = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ai >> bi;
		if (ai == bi) continue;
		ai > bi ? a++ : b++;
	}
	cout << a << " " << b;

	return 0;
}