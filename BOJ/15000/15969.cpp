#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, max = 0, min = 1e9;
	cin >> n;
	int arr[1001];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++) {
		if (arr[i] > max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];
	}

	cout << max - min;
	return 0;
}