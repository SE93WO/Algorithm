#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int main() {
	string str;
	while (true) {
		getline(cin, str);
		if (str == "*") break;
		transform(str.begin(), str.end(), str.begin(), ::tolower);
		char ch = str[0];
		bool check = true;
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == ' ' && str[i + 1] != ch) {
				check = false;
			}
		}
		
		if (check) cout << "Y" << endl;
		else cout << "N" << endl;
	}
}
