#include <iostream>
#include <string>
using namespace std;

int main() {
	int T;
	string input;

	cin >> T;
	while (T--) {
		cin >> input;
		int ans = 0;
		int alphabet[26] = { 0, };

		for (int i = 0; i < input.length(); i++) {
			alphabet[input[i] - 'A']++;
		}

		for (int i = 0; i < 26; i++) {
			if (alphabet[i] == 0)
				ans += (i + 65);
		}

		cout << ans << endl;
	}
}