#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> x >> y;
		printf("You get %d piece(s) and your dad gets %d piece(s).\n", x/y, x%y);
	}
	return 0;
}