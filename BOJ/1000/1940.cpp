#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, cnt = 0;
	int num[15001] = { 0, };

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (num[i] + num[j] == m) {
				cnt++;
				num[i] = 1e9;
				num[j] = 1e9;
				break;
			}
		}
	}

	cout << cnt;
}