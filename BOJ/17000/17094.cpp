#include <iostream>
#include <string>
using namespace std;

int main() {
	int s;
	int two = 0, e = 0;
	string str;
	cin >> s;
	cin >> str;
	for (int i = 0; i < s; i++) {
		if (str[i] == '2') two++;
		else if (str[i] == 'e') e++;
	}

	if (two == e) cout << "yee";
	else if (two > e) cout << '2';
	else cout << 'e';
}