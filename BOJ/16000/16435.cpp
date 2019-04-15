#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);	

	int h[1001];
	int n, l;
	cin >> n >> l;

	for (int i = 0; i < n; i++) {
		cin >> h[i];
	}

	sort(h, h + n);

	for (int i = 0; i < n; i++) {
		if (h[i] <= l) l++;
	}

	cout << l;
}