#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n = 0, sum = 0;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	cout << sum;
}
