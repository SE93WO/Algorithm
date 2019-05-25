#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;

	while (true) {
		cin >> n;
		if (n == 0) break;

		int arr[100] = { 0, };
		for (int i = 1; i <= n; i++) {
			cin >> arr[i];
			if (arr[i - 1] != arr[i]) cout << arr[i] << " ";
		}
		cout << "$\n";
	}

	return 0;
}