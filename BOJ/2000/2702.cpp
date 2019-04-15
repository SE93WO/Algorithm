#include <iostream>
using namespace std;

int EU(int x, int y) {
	int n;
	while (true) {
		n = x % y;
		if (n == 0)
			return y;
		x = y;
		y = n;
	}
}

int main() {
	int T, gcm, lcm;
	int a, b;
	cin >> T;
	
	for (int i = 0; i < T; i++) {
		cin >> a >> b;
		gcm = EU(a, b);
		lcm = a * b / gcm;

		cout << lcm << " " << gcm << endl;
	}
}