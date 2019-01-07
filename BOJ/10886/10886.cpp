#include <iostream>
using namespace std;

int main() {
	int n;
	int cute = 0, notCute = 0;
	cin >> n;

	while (n--) {
		int input;
		cin >> input;

		if (input == 1)
			cute++;
		else if (input == 0)
			notCute++;
	}

	if (cute > notCute) {
		cout << "Junhee is cute!";
	}
	else
		cout << "Junhee is not cute!";
}   