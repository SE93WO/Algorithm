#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	string input;

	cin >> t;
	while (t--) {
		cin >> input;
		cout << input[0] << input.back() << endl;
	}
	return 0;
}