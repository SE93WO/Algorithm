#include <iostream>
using namespace std;

int main() {
	int denominator, numerator, cnt;

	while (true) {
		cnt = 0;
		cin >> numerator >> denominator;

		if (numerator + denominator == 0)
			break;

		while (true) {
			if (numerator >= denominator) {
				numerator -= denominator;
					cnt++;
			}
			else
				break;
		}

		cout << cnt << " " << numerator << " / " << denominator << endl;
	}
}