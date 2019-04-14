#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, pos;
	int num[11] = { 0, };
	vector<int> vi;

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> num[i];
	}

	vi.push_back(n);
	for (int i = n - 1; i >= 1; i--) {
		vi.insert(vi.begin() + num[i], i);
	}

	for (int x : vi) {
		cout << x << " ";
	}
}