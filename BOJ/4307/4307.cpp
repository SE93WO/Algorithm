#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, p, input;
	
	cin >> t;
	while (t--) {
		cin >> n >> p;
		int short_t = 0, long_t = 0;
		for (int i = 0; i < p; i++) {
			cin >> input;
			short_t = max(short_t, min(input, n - input));
			long_t = max(long_t, max(input, n - input));
		}
		cout << short_t << " " << long_t << endl;
	}

	return 0;
}