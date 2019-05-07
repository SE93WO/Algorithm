#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); ++i) {
		s[i] = ((s[i] - 'A') + 23) % 26 + 'A';
	}
	cout << s;
}