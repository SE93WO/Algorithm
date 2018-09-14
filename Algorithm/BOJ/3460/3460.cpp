#include <iostream>
using namespace std;

int main() {
	int T, input;

	cin >> T;
	while (T--) {
		cin >> input;
		int cnt = 0;
		while (input >= 1) {
			if (input % 2 == 1)
				cout << cnt << " ";
			input /= 2;
			cnt++;
		}
		cout << endl;
	}
}