#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, begin;
	string input;
	cin >> t;
	getline(cin, input);

	while (t--) {
		getline(cin, input);
		begin = 0;
		for (int i = 0; i < input.length(); ++i)
			if (input[i] == ' ') {
				reverse(input.begin() + begin, input.begin() + i);
				begin = i + 1;
			}
		reverse(input.begin() + begin, input.end());

		cout << input + "\n";
	}

	return 0;
}