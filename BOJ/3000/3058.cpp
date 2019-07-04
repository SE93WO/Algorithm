#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, input;
	cin >> t;

	while (t--) {
		int sum = 0;
		int min = 1e9;
		for (int i = 0; i < 7; i++) {
			cin >> input;
			if (input % 2 == 0) {
				sum += input;
				if (min > input) min = input;
			}
		}

		cout << sum << " " << min << endl;
	}
}
