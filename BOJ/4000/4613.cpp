#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;

	while (true) {
		int sum = 0;
		getline(cin, input);
		if (input == "#") break;

		for (int i = 0; i < input.length(); i++) {
			if (isalpha(input[i])) {
				sum += (i + 1) * (int)(input[i] - 'A' + 1);
			}
		}
		cout << sum << endl;
	}
}