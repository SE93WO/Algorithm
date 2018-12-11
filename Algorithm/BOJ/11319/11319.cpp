#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

typedef long long ll;
using namespace std;

int main() {
	char ch[] = { 'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u' };
	int S;
	cin >> S;

	cin.ignore();
	while (S--) {
		string input;
		int blank = 0, vowels = 0;
		getline(cin, input);

		for (int i = 0; i < input.size(); i++) {
			if (input[i] == ' ') {
				blank++;
				continue;
			}
			for (int j = 0; j < 10; j++) {
				if (input[i] == ch[j])
					vowels++;
			}
		}

		cout << input.size() - blank - vowels << " " << vowels << endl;
	}
	
	
}