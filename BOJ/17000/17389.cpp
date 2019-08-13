#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int main() {
	int n;
	int ans = 0, bonus = 0;
	string str;

	cin >> n;
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == 'O') {
			ans += (i + 1) + bonus++;
		}
		else {
			bonus = 0;
		}
	}
	cout << ans;
}
