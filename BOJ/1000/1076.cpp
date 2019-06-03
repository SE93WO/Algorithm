#include <bits/stdc++.h>
using namespace std;

int main() {
	string str[10] = { "black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white" };
	string input[3];
	int value[3] = { 0, };
	long long int ans = 0;

	for (int i = 0; i < 3; i++) {
		cin >> input[i];
		for (int j = 0; j < 10; j++) {
			if (input[i] == str[j]) { value[i] = j; }
		}
	}

	ans = (value[0] * 10) + value[1];
	ans *= pow(10, value[2]);

	cout << ans;

	return 0;
}
