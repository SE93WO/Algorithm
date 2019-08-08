#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int main() {
	string input;
	int left = 0, right = 0;
	bool isleft = true;
	cin >> input;

	for (int i = 0; i < input.size(); i++) {
		if (input[i] == '@' && isleft) { left++; }
		if (input[i] == '@' && !isleft) { right++; }
		if (input[i] == '0') { isleft = false; }
	}

	cout << left << " " << right;
}
