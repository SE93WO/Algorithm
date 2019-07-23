#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int main() {
	int n, c, input;
	cin >> n >> c;
	set<int> petrad, period;
	for (int i = 0; i < n; i++) {
		cin >> input;
		if (period.find(input) != period.end()) continue;
		period.insert(input);
		for (int i = input; i <= c; i += input) petrad.insert(i);
	}
	cout << petrad.size();
}