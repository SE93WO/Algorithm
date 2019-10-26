#include <iostream>
#include <string>
using namespace std;

int main() {
	string a, b;
	bool check = true;
	cin >> a;
	b = a;
	for (int i = 0; i < a.size(); i++) {
		if (b[a.size() - i - 1] == a[i]) check = true;
		else {
			check = false;
			break;
		}
	}
	if (check) cout << "true";
	else cout << "false";
}