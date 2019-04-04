#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	string s;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n >> s;
		for (int j = 0; j < n; j++)
			cout << s;
		cout << endl;
	}
}