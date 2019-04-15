#include <iostream>
#include <string>
using namespace std;

int main() {
	int T;

	cin >> T;
	while (T--) {
		int pos;

		string input;
		
		cin >> pos;
		cin >> input;

		input.erase(pos - 1, 1);

		cout << input << "\n";
	}

 }