#include <bits/stdc++.h>
using namespace std;

int main() {
	string s, temp;
	int sum = 0;
	getline(cin, s);

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ',') {
			sum += atoi(temp.c_str());
			temp = "";
		}
		else {
			temp = temp + s[i];
		}
	}
	sum += atoi(temp.c_str());
	cout << sum;
}
