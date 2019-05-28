#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
	while (true) {
		cin >> a >> b;
		if (a == 0 && b == 0) break;
		if (a % b == 0) { cout << "multiple\n"; }
		else if (b % a == 0) { cout << "factor\n"; }
		else { cout << "neither\n"; }
	}
	return 0;
}
