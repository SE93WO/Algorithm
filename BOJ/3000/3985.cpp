#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int main() {
	int l, n, cnt_1 = 0, cnt_2 = 0, ans_1 = 0, ans_2 = 0;
	int cake[1001] = { 0, };
	cin >> l >> n;

	for (int i = 1; i <= n; i++) {
		int a, b;
		cin >> a >> b;
		int cnt = 0;
		if (cnt_1 < b - a) {
			cnt_1 = b - a;
			ans_1 = i;
		}
		for (int j = a; j <= b; j++) { 
			if(cake[j] == 0) cake[j] = i;
			if (cake[j] == i) cnt++;
		}
		if (cnt_2 < cnt) {
			cnt_2 = cnt;
			ans_2 = i;
		}
	}

	cout << ans_1 << '\n' << ans_2 << endl;
}
