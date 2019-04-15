#include <iostream>
using namespace std;

int dp[1001][1001];
int comb(int n, int k) {
	if (n == k || k == 0) return 1;

	if (dp[n][k]) return dp[n][k];
	return dp[n][k] = comb(n - 1, k - 1) + comb(n - 1, k) % 10007;
}

int main() {
	int N, K;
	cin >> N >> K;

	cout << comb(N, K) % 10007;
}