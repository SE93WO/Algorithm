#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <map>
#include <algorithm>

typedef long long ll;
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	cin.ignore();

	while (n--) {
		int g = 0, b = 0;
		string input;
		getline(cin, input);

		for (int i = 0; i < input.length(); i++) {
			if (input[i] == 'g' || input[i] == 'G')
				g++;
			else if (input[i] == 'b' || input[i] == 'B')
				b++;
		}

		cout << input << " " << "is ";
		if (g > b)
			cout << "GOOD\n";
		else if (g == b)
			cout << "NEUTRAL\n";
		else if (g < b)
			cout << "A BADDY\n";
	}
}