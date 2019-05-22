#include <bits/stdc++.h>
using namespace std;

int main() {
	bool prime[100001];
	int arr[100001];

	arr[1] = false;
	for (int i = 2; i <= 100000; i++) {
		prime[i] = true;
		for (int j = 2; j * j <= i; j++) {
			if (i % j == 0) {
				arr[i] = arr[i / j] + 1;
				prime[i] = false;
				break;
			}
		}
		if (prime[i])
			arr[i] = 1;
	}
	int a, b;
	cin >> a >> b;
	int sum = 0;
	for (int i = a; i <= b; i++) {
		sum += prime[arr[i]];
	}
	cout << sum;
}