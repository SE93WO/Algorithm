#include <bits/stdc++.h>
using namespace std;

int main() {
	char word[11];
	int n, cnt = 0;
	cin >> word >> n;

	while (n--) {
		bool found = false;
		char ring[11];
		cin >> ring;
		for (int i = 0; i < 10; i++) {
			found = true;
			for (int j = 0; word[j]; j++) {	
				if (ring[(i + j) % 10] != word[j]) {
					found = false;
					break;
				}
			}
			if (found) {
				cnt++;
				break;
			}
		}
	}
	cout << cnt;
}