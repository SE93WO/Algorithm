#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	string name, enter;
	map<string, bool, greater<string>> mm;

	cin >> n;
	while (n--) {
		cin >> name >> enter;

		bool check;
		if (enter == "enter") {
			check = true;
		}
		else {
			check = false;
		}

		mm[name] = check;
	}

	for (map<string, bool, greater<string>>::iterator iter = mm.begin(); iter != mm.end(); iter++) {
		if (iter->second) {
			cout << iter->first << "\n";
		}
	}
}