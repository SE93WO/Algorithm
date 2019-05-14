#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, sum = 0;
	int check[1001] = { 0, };
	int num[1001] = { 0, };
	cin >> n >> m;
	
	for (int i = 0; i < m; i++) {
		int input;
		cin >> input;

		for (int j = 1; j <= n / input; j++) {
			int temp = j * input;
			num[temp] = 1;
		}
	}
	
	for (int i = 0; i <= n; i++) {
		if (num[i] == 1) {
			sum += i;	
		}
	}

	cout << sum;
}