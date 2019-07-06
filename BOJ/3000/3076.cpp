#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int main() {
	int r, c, a, b;
	cin >> r >> c >> a >> b;

	string x, y;
	for (int i = 0; i < c; i++) {
		for (int j = 0; j < b; j++) {
			if (i % 2 == 0) x += "X", y += ".";
			else  x += ".", y += "X";
		}
	}

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < a; j++) {
			if (i % 2 == 0) cout << x << endl;
			else cout << y << endl;
		}
	}
}
