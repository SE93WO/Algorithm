#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int input[5];
	int avg = 0, median = 0;

	for (int i = 0; i < 5; i++) {
		cin >> input[i];
	}

	sort(input, input + 5);

	for (int i = 0; i < 5; i++) {
		avg += input[i];
	}

	cout << avg / 5 << "\n";
	cout << input[2];
 }