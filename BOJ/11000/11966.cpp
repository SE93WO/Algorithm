#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, sum = 1;

	cin >> n;
	if (n == 1) {
		cout << "1"; 
		return 0;
	}

	while (sum < n) {
		sum *= 2;
	}

	if (sum == n)
		cout << "1";
	else
		cout << "0";
}
