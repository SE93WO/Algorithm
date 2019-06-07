#include <bits/stdc++.h>
using namespace std;

int main() {
	int t = 0;
	double price;
	cin >> t;
	while (t--) {
		cin >> price;
		printf("$.2f\n", price * 0.8);
	}
}
