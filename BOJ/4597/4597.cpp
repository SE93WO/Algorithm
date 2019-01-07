#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;

	while (true) {
		int cnt = 0;
		cin >> input;
		if (input == "#") break;

		for (int i = 0; i < input.size(); i++) {
			if (input[i] == '1')
				cnt++;
			else if (input[i] == 'e') {
				if (cnt % 2 == 0)
					input[i] = '0';
				else
					input[i] = '1';
			}
			else if (input[i] == 'o') {
				if (cnt % 2 == 0)
					input[i] = '1';
				else
					input[i] = '0';
			}
		}
		cout << input << endl;
	}
}