#include <iostream>
using namespace std;

int main() {
	int n;
	while (true) {
		cin >> n;
		if (n == 0) break;
		for (int i = n; i > 0; i--) {
			for (int j = n - i; j >= 0 ; j--) {
				cout << "*";
			}
			cout << endl;
		}
	}
}