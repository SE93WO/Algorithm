#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int main() {
	vector<int> vi;

	for (int i = 1; i <= 20; i++) {
		vi.push_back(i);
	}

	int a, b;
	for (int i = 0; i < 10; i++) {
		cin >> a >> b;
		reverse(vi.begin() + a - 1, vi.begin() + b);
	}

	for (auto x : vi) {
		cout << x << " ";
	}
}
