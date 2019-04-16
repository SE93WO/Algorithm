#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	string a, b;
	string result[1001];
	int n, cnt = 0;
	cin >> a >> n;

	while (n--) {
		cin >> b;
		for (int i = 0; i < a.size(); i++) {
			if (i == a.size()-1) {
				result[cnt] = b;
				cnt++;
			}
			if (a[i] == '*') continue;
			if (a[i] != b[i]) break;
		}
	}

	cout << cnt << endl;
	for (int i = 0; i < cnt; i++) {
		cout << result[i] << endl;
	}
}
