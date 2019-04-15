#include <iostream>
#include <string>
using namespace std;

int main() {
	string word, alphabat;
	int T;

	cin >> T;
	while (T--) {
		cin.ignore(1000, '\n');
		getline(cin, word);
		cin >> alphabat;

		for (char &c : word) {
			if (c != ' ')
				c = alphabat[c - 'A'];
		}

		cout << word << endl;
	}

 }