#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	if (n % 2 == 0) {
		cout << "I LOVE CBNU";
		return 0;
	}

	for (int i = 0; i < n; i++) {
		cout << '*';
	 }

	cout << '\n';
	
	for (int i = 0; i < n / 2; i++) {
		cout << ' ';
	}
	cout << "*\n";

	for (int i = n / 2, j = 1; i > 0; i--, j++) {
		for (int k = i - 1; k > 0; k--) {
			cout << " ";
		}
		cout << "*";

		for (int l = 0; l < j * 2 - 1; l++) {
			cout << " ";
		}
		cout << "*\n";
	}
}
