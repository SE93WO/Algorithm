#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, p;
	while (true) {
		cin >> n;
		if (n == 0) break;
		cin >> p;
		if (p % 2 == 0) {
			if (n / 2 >= p)
				cout << p - 1 << ' ' << n - p + 1 << ' ' << n - p + 2 << endl;
			else
				cout << n - p + 1 << ' ' << n - p + 2 << ' ' << p - 1 << endl;
		}
		else {
			if (n / 2 >= p)
				cout << p + 1 << ' ' << n - p << ' ' << n - p + 1 << endl;
			else
				cout << n - p << ' ' << n - p + 1 << ' ' << p + 1 << endl;
		}
	}
	return 0;
}
