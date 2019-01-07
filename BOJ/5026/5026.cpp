#include <iostream>
#include <string>
using namespace std;

int main() {
	int N, sum;
	string input;
	cin >> N;
	while (N--) {
		string a, b;
		cin >> input;
		if (isdigit(input[0])) {
			size_t found = input.find('+');

			for (int i = 0; i < found; i++) {
				a += input[i];
			}

			for (int i = found; i < input.length(); i++) {
				b += input[i];
			}

			sum = atoi(a.c_str()) + atoi(b.c_str());
			cout << sum << endl;
			sum = 0;
		}
		else {
			cout << "skipped\n";
		}
	}
}