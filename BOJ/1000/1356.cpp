#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int main() {
	string num;
	cin >> num;

	lli l, r, pivot = 0;
	int ans = 0;
	for (int i = 0; i < num.size() - 1; i++) {
		l = 1, r = 1, ans = 0;
		pivot++;
		for (int j = 0; j < pivot; j++) {
			l *= num[j] - '0';
		}
		for (int k = pivot; k < num.size(); k++) {
			r *= num[k] - '0';
		} 

		if (l == r) {
			ans = 1;
			break;
		}
	}

	if (ans == 1) cout << "YES";
	else cout << "NO";

}
