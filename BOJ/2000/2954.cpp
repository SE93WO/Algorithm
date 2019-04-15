#include <iostream>
#include <string>
using namespace std;

char vowel[] = { 'a', 'e', 'i', 'o', 'u' };

int main() {
	string input;
	getline(cin, input);

	for (int i = 0; i < input.length(); i++) {
		for (int j = 0; j < 5; j++) {
			if (input[i] == vowel[j])
				i += 2;
		}
		cout << input[i];
	}
}