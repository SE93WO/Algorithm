#include <bits/stdc++.h>
using namespace std;

int main() {
	int a = 0, b = 0;
	int card_a[10], card_b[10];

	for (int i = 0; i < 10; i++) {
		cin >> card_a[i];
	}

	for (int i = 0; i < 10; i++) {
		cin >> card_b[i];
	}

	for (int i = 0; i < 10; i++) {
		if (card_a[i] > card_b[i]) a++;
		else if (card_a[i] < card_b[i]) b++;
		else if (card_a[i] == card_b[i]) continue;
	}

	if (a > b) cout << "A";
	else if (a < b) cout << "B";
	else if (a == b) cout << "D";
}
