#include <iostream>
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
	int T;
	cin >> T;

	while (T--) {
		int gcm, lcm;
		int A, B;
		cin >> A >> B;

		gcm = EU(A, B);
		lcm = A * B / gcm;

		cout << lcm << endl;
	}
}