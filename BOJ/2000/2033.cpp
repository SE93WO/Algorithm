#include <iostream>
using namespace std;

int main() {
	int n, div = 10;
	cin >> n;
	while (n > div) {
		n = (n + div / 2) / div * div;
		div *= 10;
	}
	cout << n;
}