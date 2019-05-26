#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, w, h;
	cin >> n >> w >> h;
	double maxL = sqrt(pow(w, 2) + pow(h, 2));
	while (n--) {
		int input;
		cin >> input;
		if (input <= maxL) cout << "DA\n";
		else cout << "NE\n";
	}
	return 0;
}
