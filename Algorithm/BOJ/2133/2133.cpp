#include <iostream>
using namespace std;


int main() {
	int N;
	int dp[31] = { 1, 0, 3, };
	cin >> N;

	for (int i = 3; i <= N; i++) {
		dp[i] += dp[i - 2] * 3;

		for (int j = 4; j <= i; j += 2)
			dp[i] += dp[i - j] * 2;
	}

	cout << dp[N];
}