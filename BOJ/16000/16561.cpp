#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	n /= 3;
	n = ((n - 1) * (n - 2) / 2);
	cout << n;
}
