#include <bits/stdc++.h>
using namespace std;

int main() {
	int l, a, b, c, d;
	int cnt_1, cnt_2;

	cin >> l >> a >> b >> c >> d;
	
	if (a % c != 0)
		cnt_1 = a / c + 1;
	else
		cnt_1 = a / c;

	if (b % d != 0)
		cnt_2 = b / d + 1;
	else
		cnt_2 = b / d;

	cnt_1 > cnt_2 ? (cout << l - cnt_1) : (cout << l - cnt_2);

	return 0;
}
