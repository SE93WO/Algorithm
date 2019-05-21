#include <bits/stdc++.h>
using namespace std;

int main() {
	int x1, x2, x3, y1, y2, y3, s;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	s = (x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1);
	if (s > 0) {
		cout << "1";
	}
	else if (s < 0) {
		cout << "-1";
	}
	else {
		cout << "0";
	}

	return 0;
}