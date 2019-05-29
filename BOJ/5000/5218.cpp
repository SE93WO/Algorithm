#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	while (n--) {
		string a, b;
		cin >> a >> b;
		cout << "Distances: ";
		for (int i = 0; i < a.size(); i++) {
			int x = a[i] - '0';
			int y = b[i] - '0';
			if (y - x >= 0) cout << y - x << " ";
			else cout << y - x + 26 << " ";
		}
		cout << '\n';
	}
	return 0;
}
