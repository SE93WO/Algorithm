#include <bits/stdc++.h>
using namespace std;

int main() {
	int apples = 0;
	int bananas = 0;

	int input;
	for (int i = 0; i < 3; i++) {
		cin >> input;
		apples += input * (3 - i);
	}

	for (int i = 0; i < 3; i++) {
		cin >> input;
		bananas += input * (3 - i);
	}

	if (apples > bananas) cout << 'A';
	else if (apples < bananas) cout << 'B';
	else cout << 'T';
}