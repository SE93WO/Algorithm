#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
	string input;
	while (true) {
		cin >> input;
		if (input[0] == '0') break;
		int sum = 0;
		for (int i = 0; i < input.size(); i++) {
			sum += input[i] - '0';
		}
		while (sum >= 10) {
			int temp = sum;
			sum = 0;
			while (temp) {
				sum += temp % 10;
				temp /= 10;
			}
		}
		cout << sum << '\n';
	}
}