#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, sum;
	string input, temp;
	bool check = false;

	cin >> t;
	while (t--) {
		cin >> input;
		sum = atoi(input.c_str());
		reverse(input.begin(), input.end());
		sum += atoi(input.c_str());

		string temp = to_string(sum);
		for (int i = 0; i < temp.size(); i++) {
			if (temp[i] == temp[temp.size() - (i + 1)]) {
				check = true;
			}
			else {
				check = false;
				break;
			}
		}
		check == true ? cout << "YES\n" : cout << "NO\n";
	}
}