#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (a == 0) return b;
	return gcd(b % a, a);
}

int main() {
	int a, b;
	cin >> a >> b;
	int val = 1;
	int f = b / a;
	for (int i = 2; i * i <= f; i++) {
		if (f % i == 0 && gcd(i, f / i) == 1) val = i;
	}
	cout << a * val << " " << a * (f / val);
}