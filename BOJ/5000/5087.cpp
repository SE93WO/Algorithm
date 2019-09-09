#include <iostream>
using namespace std;

int main() {
	while (true) {
		char num;
		int even = 0, odd = 0;
		while (true) {
			cin >> num;
			if (num == '*') break;
			if (num == '#') return 0;
			if (num == 'A') odd++;
			else if (num % 2 == 0) even++;
			else odd++;
		}
		if (even == odd) cout << "Draw" << endl;
		else if (even > odd) cout << "Tania" << endl;
		else cout << "Cheryl" << endl;
	}
}