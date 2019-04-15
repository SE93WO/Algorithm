#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <queue>
#include <vector>
#include <vector>
#include <map>
#include <stack>
#include <deque>
#include <algorithm>

typedef long long ll;
using namespace std;

string  password;
int dp[5001];

void solve() {
	for (int i = 1; i < password.length(); i++) {
		if (password[i] - '0' >= 1) {
			dp[i] = (dp[i - 1] + dp[i]) % 1000000;
		}

		int temp = (password[i - 1] - '0') * 10 + (password[i] - '0');

		if (temp >= 10 && temp < 27) {
			dp[i] = (dp[i - 2] + dp[i]) % 1000000;
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> password;
	dp[0] = 1;
	password = " " + password;
	solve();
	cout << dp[password.size() - 1];
	return 0;
}