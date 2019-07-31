#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	while (n--) {
		string input;
		cin >> input;
		for (int i = 0; i < input.size(); i++) {
			input[i] = tolower(input[i]);
		}
		cout << input << endl;
	}
	return 0;
}
