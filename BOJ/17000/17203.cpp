#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int main() {
	int n, q, arr[1001] = { 0, };
	cin >> n >> q;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < q; i++) {
		int a, b, sum = 0;
		cin >> a >> b;
		if (a == b) cout << "0\n";
		else {
			for (int j = a - 1; j < b - 1; j++) {
				sum += abs(arr[j] - arr[j + 1]);
			}
			cout << sum << endl;
		}		
	}
}
