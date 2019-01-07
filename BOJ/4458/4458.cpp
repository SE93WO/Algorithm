#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	string input;

	cin >> N;
	cin.ignore();
	while (N--) {
		getline(cin, input);

		if ('a' <= input[0] && input[0] <= 'z')
			input[0] -= 32;

		cout << input << endl;
	}
}
