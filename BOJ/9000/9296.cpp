#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);	

	int t, l;
	cin >> t;
	for(int i = 0; i < t; i++) {
		cin >> l;
		string a, b;
		cin >> a >> b;

		int cnt = 0;
		for (int i = 0; i < l; i++) {
			if (a[i] != b[i]) cnt++;
		}

		printf("Case %d: %d\n", i + 1, cnt);
	}
}