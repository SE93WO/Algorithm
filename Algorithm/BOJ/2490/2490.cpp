#include <iostream>
using namespace std;

int main() {
	int yut[4];
	int sum = 0;

	for (int i = 0; i < 3; i++) {
		sum = 0;
		for (int j = 0; j < 4; j++) {
			cin >> yut[j];
			sum += yut[j];
		}

		if (sum == 4)
			cout << "E\n" ;
		else if (sum == 3)
			cout << "A\n";
		else if (sum == 2)
			cout << "B\n";
		else if (sum == 1)
			cout << "C\n";
		else
			cout << "D\n";
	}
}