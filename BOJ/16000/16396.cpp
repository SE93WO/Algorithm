#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int arr[10001] = { 0, };
	int n, nmax = 0, ans = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		nmax = max(y, nmax);
		for (int j = x; j < y; j++) {
			arr[j] = 1;
		}
	}

	for (int i = 1; i <= nmax; i++) {
		if (arr[i] == 1) ans++;
	}

	cout << ans;
}