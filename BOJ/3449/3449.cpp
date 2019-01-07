#include <iostream>
#include <string>
using namespace std;

int main() {
	int T;
	string x, y;

	cin >> T;
	while (T--) {
		int ans = 0;
		cin >> x >> y;
		for (int i = 0; i < x.length(); i++) {
			if (x[i] != y[i])
				ans++;
		}
		cout << "Hamming distance is "<< ans << "." << endl;
	}
}