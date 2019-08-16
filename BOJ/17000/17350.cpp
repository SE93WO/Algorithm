#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int main() {
	int n;
	cin >> n;
	string str;
	bool check = false;
	for(int i = 0; i < n; i++) {
		cin >> str;
		//if (str.find("anj") != string::npos) { check = true; }
		if (str.size() == 3) {
			for (int i = 0; i < str.size() - 2; i++) {
				if (str[i] == 'a' && str[i + 1] == 'n' && str[i + 2] == 'j') check = true;
			}
		}
	}
	if (check) cout << "构具;";
	else cout << "构具?";
}
