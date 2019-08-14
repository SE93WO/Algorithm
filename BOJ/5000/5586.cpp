#include <bits/stdc++.h>
using namespace std;

int main() {
	int joi = 0, ioi = 0;
	string input;
	cin >> input;

	for (int i = 0; i < input.size() - 2; i++) {
		if (input[i] == 'J' && input[i + 1] == 'O' && input[i + 2] == 'I')
			joi++;
		else if (input[i] == 'I' && input[i + 1] == 'O' && input[i + 2] == 'I')
			ioi++;
	}
	cout << joi << '\n' << ioi;

	return 0;
}
