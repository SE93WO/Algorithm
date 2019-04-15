#include <iostream>
using namespace std;

int comb(int n, int k) {
	if (n == k || k == 0) return 1;

	return comb(n - 1, k - 1) + comb(n - 1, k);
}

int main() {
	int N, K;
	cin >> N >> K;

	cout << comb(N, K);
}