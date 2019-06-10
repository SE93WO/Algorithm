#include <bits/stdc++.h>
using namespace std;

int main() {
	string input;
	string temp = "";
	long long int ans = 0;
	while (getline(cin, input)) {
		for (int i = 0; i < input.size(); i++) {
			if (input[i] == ',') {
				ans += atoi(temp.c_str());
				temp = "";
			}
			else {
				temp = temp + input[i];
			}
		}
	}

	ans += atoi(temp.c_str());
	cout << ans;

	return 0;
}
