#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int num(int a, int b) {
	int n = 0;
	for (; a; a /= b)
		n += a % b;
	return n;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	for (int i = 1000; i < 10000; i++) {
		if (num(i, 10) == num(i, 16) && num(i, 12) == num(i, 16))
			cout << i << endl;
	}
	return 0;
 }