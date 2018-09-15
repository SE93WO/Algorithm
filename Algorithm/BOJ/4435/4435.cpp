#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	int T;
	int Gandalf[6] = {1, 2, 3, 3, 4, 10};
	int Sauron[7] = {1, 2, 2, 2, 3, 5, 10};

	cin >> T;
	for (int i = 1; i <= T; i++) {
		int input;
		int GandalfScore = 0;
		int SauronScore = 0;
		for (int j = 0; j < 6; j++) {
			cin >> input;
			GandalfScore += input * Gandalf[j];
		}
		for (int j = 0; j < 7; j++) {
			cin >> input;
			SauronScore += input * Sauron[j];
		}

		if (GandalfScore > SauronScore) {
			cout << "Battle " << i << ": " << "Good triumphs over Evil" << endl;
		}
		else if (GandalfScore < SauronScore) {
			cout << "Battle " << i << ": " << "Evil eradicates all trace of Good" << endl;
		}
		else 
			cout << "Battle " << i << ": " << "No victor on this battle field" << endl;
	}
}