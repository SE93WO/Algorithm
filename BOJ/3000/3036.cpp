#include <bits/stdc++.h>
using namespace std;

int main() {

	int n, r1, r, a, b, c;
	cin >> n >> r1;
	for (int i = 1; i < n; i++) {
		cin >> r;
		a = r1;
		b = r;
		while (b) {
			c = a % b;
			a = b;
			b = c;
		}
		printf("%d/%d\n", r1 / a, r / a);
	}

	return 0;
}