//#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long ll;

int main() {
	int c, k, p, ans = 0;
	cin >> c >> k >> p;
	for (int i = 1; i <= c; i++) {
		ans += k * i + p * (i * i);
	}
	cout << ans;

}
