#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int main() {
	int a, b;
	cin >> a >> b;
	vector<int> vi_a(a);
	
	for (int i = 0; i < a; i++) {
		cin >> vi_a[i];
	}

	sort(vi_a.begin(), vi_a.end());

	int ans = 0;

	for (int i = 0; i < b; i++) {
		int temp;
		cin >> temp;
		if (binary_search(vi_a.begin(), vi_a.end(), temp)) {
			ans++;
		}
	}
	
	cout << a + b - ans * 2;
}
