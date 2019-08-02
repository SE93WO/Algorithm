#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int main() {
	int n;
	string str;
	cin >> n;
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == str[i - 1]) {
			cout << "No";
			return 0;
		}
	}
	cout << "Yes";
}
