#include <iostream>
#include <string>
using namespace std;

int main() {
	int temp, sum = 0;
	string input;
	
	cin >> input;

	for (int i = 0; i < input.length(); i++) {
		temp = input[i] - '0';
		if (temp >= 49 && temp <= 74)
			temp -= 48;
		else if (temp >= 17 && temp <= 42)
			temp += 10;
		sum += temp;
	}

	for (temp  = 2; temp < sum; temp++) {
		if (sum % temp == 0) {
			cout << "It is not a prime word.";
			break;
		}
	}

	if (temp == sum || sum == 1)
		cout << "It is a prime word.";

}