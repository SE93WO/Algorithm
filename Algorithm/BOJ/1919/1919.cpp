#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
	string x, y;
	int ans = 0;
	int ch[26] = { 0, };

	cin >> x >> y;
	for (int i = 0; i < x.length(); i++)
		ch[x[i] - 'a']++;
	for (int i = 0; i < y.length(); i++)
		ch[y[i] - 'a']--;

	for (int i = 0; i < 26; i++) {
		if (ch[i] != 0)
			ans += abs(ch[i]);
	}

	cout << ans;
}