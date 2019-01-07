#include <iostream>
using namespace std;

int main() {
	int n, k;

	while (true) {
		cin >> n >> k;
		int div = 1;
		int ans = 1;

		if (n == 0 && k == 0) break;

		if (n - k < k) k = n - k;

		while (k-- > 0) {
			ans *= n--;
			ans /= div++;
		}

		cout << ans;
	}
}