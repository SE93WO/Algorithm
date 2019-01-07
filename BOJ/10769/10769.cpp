#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	int happy = 0, sad = 0;
	getline(cin, input);

	for (int i = 0; i < input.length(); i++) {
		if (input[i] == ':') {
			if (input[i + 1] == '-' && input[i + 2] == ')') {
				happy++;
				i += 2;
			}
			else if (input[i + 1] == '-' && input[i + 2] == '(') {
				sad++;
				i += 2;
			}
			else
				continue;
		}
	}

	if (happy > sad) {
		cout << "happy";
	}
	else if (happy < sad) {
		cout << "sad";
	}
	else if (happy == 0 && sad == 0) {
		cout << "none";
	}
	else
		cout << "unsure";
}