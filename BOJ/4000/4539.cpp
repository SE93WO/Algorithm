#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	while (n--) {
		long long int num;
		int div = 10;
		cin >> num;
		while (num > div) {
			num = (num + div / 2) / div * div;
			div *= 10;
		}
		cout << num << endl;
	}
}