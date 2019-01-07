#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int input, sum = 0, m = 101;

	for (int i = 0; i < 7; i++) {
		cin >> input;
		if (input % 2 != 0) {
			sum += input;
			m = min(m, input);
		}
	}

	if (sum > 0) {
		cout << sum << endl;
		cout << m;
	}
	else
		cout << -1;
}