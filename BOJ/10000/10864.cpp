#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	int arr[1001] = { 0, };

	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		arr[x]++;
		arr[y]++;
	}

	for (int i = 1; i <= n; i++) {
		cout << arr[i] << endl;
	}
	
	return 0;
}