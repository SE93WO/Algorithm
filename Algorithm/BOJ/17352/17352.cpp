#include <iostream>
using namespace std;

int main() {
	int k, input;
	cin >> k;
	while (k--) {
		cin >> input;
		for (int i = 0; i < input; i++) {
			cout << "=";
		}
		cout << endl;
	}
}