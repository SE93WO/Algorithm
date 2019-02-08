#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);	
	
	string input;
	int ans = 1;

	cin >> input;
	for (int i = 0; i < input.size(); i++) {
		if (input[i] == 'A') {
			if (ans == 1) ans = 2;
			else if (ans == 2) ans = 1;
		}
		else if (input[i] == 'B') {
			if (ans == 2) ans = 3;
			else if (ans == 3) ans = 2;
		}
		else if (input[i] == 'C') {
			if (ans == 3) ans = 1;
			else if (ans == 1) ans = 3;
		}
	}

	cout << ans;
}