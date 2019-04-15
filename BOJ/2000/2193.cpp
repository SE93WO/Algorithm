#include <iostream>
using namespace std;


int main() {
	int N;
	long long dp[91] = { 0, 1, 1 };
	cin >> N;

	for (int i = 3; i <= N; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	
	cout << dp[N];
}