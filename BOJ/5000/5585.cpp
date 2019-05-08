#include <bits/stdc++.h>
using namespace std;


int main() {
	int n, cnt = 0;
	cin >> n;
	int arr[6] = { 500, 100, 50, 10, 5, 1 };
	n = 1000 - n;

	for (int i = 0; i < 6; i++) {
		while (n >= arr[i]) {
			n -= arr[i];
			cnt++;
		}
	}

	cout << cnt;
	return 0;
}