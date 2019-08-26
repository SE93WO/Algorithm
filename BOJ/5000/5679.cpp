#include <iostream>
using namespace std;

int main() {
	int n;
	while (cin >> n, n != 0) {
		int max = 0;
		while (true) {
			max = (n > max) ? n : max;
			if (n == 1) break;
			if (n % 2 == 0) {
				n = n / 2;
			}
			else {
				n = 3 * n + 1;
			}
		}
		cout << max << endl;
	}
}