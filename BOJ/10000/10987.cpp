#include <iostream>
#include <string>
using namespace std;

int main() {
	char vowel[5] = { 'a', 'e', 'i', 'o', 'u' };
	string input;
	int count = 0;
	cin >> input;

	for (int i = 0; i < input.size(); i++) {
		for (int j = 0; j < 5; j++) {
			if (input[i] == vowel[j])
				count++;
		}
	}

	cout << count;
}