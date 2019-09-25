#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, m;
	int cnt = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int input, output;
		cin >> input >> output;
		m += (input - output);
		if (m < 0) {
			cout << "0";
			return 0;
		}
		cnt = max(m, cnt);
	}
	cout << cnt;
}