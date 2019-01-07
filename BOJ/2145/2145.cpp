#include <iostream>
using namespace std;

int main() {
	int input;

	while (true) {
		int sum = 0;
		cin >> input;

		while (input != 0) {
			sum += input % 10;
			input /= 10;

			if (input < 10 && sum >= 10) {
				sum += input;
				input = sum;
				sum = 0;
			}
		}
		
		if (sum != 0) {
			cout << sum << endl;
		}
		else break;
 	}
}