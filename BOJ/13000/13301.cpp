#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main() {
	int n;
	ll ans[81] = { 1, 1 };
	cin >> n;
	
	for (int i = 2; i <= 80; i++) {
		ans[i] = ans[i - 1] + ans[i - 2];
	}

	cout << (ans[n - 1] + ans[n]) * 2;
}