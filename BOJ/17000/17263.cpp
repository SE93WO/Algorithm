#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int main() {
	int n, input;
	int nMax = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input;
		nMax = max(input, nMax);
	}
	cout << nMax;
}
