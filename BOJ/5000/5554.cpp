#include <bits/stdc++.h>
using namespace std;

int main() {
	int input, second = 0;

	for (int i = 0; i < 4; i++) {
		cin >> input;
		second += input;
	}

	cout << second / 60 << endl;
	cout << second % 60;

	return 0;
}