#include <iostream>
using namespace std;

int main() {
	int L, P, input, ans;
	cin >> L >> P;
	int participants = L * P;

	for (int i = 0; i < 5; i++) {
		cin >> input;
		input -= participants;
		cout << input << " ";
	}
}