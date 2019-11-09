#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	int left = 1, right = k, ans = 0;
	while (left <= right) {
		long long cnt = 0;
		int mid = (left + right) / 2;
		for (int i = 1; i <= n; i++) {
			cnt += min(mid / i, n);
		}
		if (cnt < k) {
			left = mid + 1;
		}
		else {
			ans = mid;
			right = mid - 1;
		}
	}
	cout << ans;
}