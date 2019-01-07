#include <iostream>
using namespace std;

int main() {
	int input, count = 0, sum = 1;
	cin >> input;

	while (true) {

		if (input < 9) {
			break;
		}

		sum = 1;
		while (input != 0) {
			sum *= input % 10;
			input /= 10;
		}
		count++;
		input = sum;
	}

	cout << count;

}