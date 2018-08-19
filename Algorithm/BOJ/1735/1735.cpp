#include <iostream>
#include <algorithm>
using namespace std;

int EU(int x, int y) {
	int n;
	while (true) {
		n = x % y;
		if (n == 0) return y;
		x = y;
		y = n;
	}
}

int main() {
	int numerator, denominator;
	int A, B, C, D;
	int gcm;

	cin >> A >> B;
	cin >> C >> D;
	numerator = A * D + B * C;
	denominator = B * D;

	gcm = EU(numerator, denominator);
	cout << numerator / gcm << " " << denominator / gcm;
}