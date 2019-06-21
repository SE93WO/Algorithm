#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	string str[21];
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> str[i];
	}

	bool inc = false, dec = false;

	if (str[0] < str[1])
		inc = true;
	else if (str[0] > str[1])
		dec = true;

	for (int i = 1; i < n - 1; i++) {
		if (inc && str[i] < str[i + 1])
			inc = true;
		else if (dec && str[i] > str[i + 1])
			dec = true;
		else {
			cout << "NEITHER";
			return 0;
		}
	}

	if (inc)
		cout << "INCREASING";
	else if (dec)
		cout << "DECREASING";
}
