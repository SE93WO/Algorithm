#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <vector>
#include <stack>
#include <deque>
#include <algorithm>

typedef long long ll;
using namespace std;

int arr[20];
int N, S;
int ans = 0;

void solve(int i, int sum) {
	if (i == N) {
		if (sum == S) {
			ans += 1;
		}
		return;
	}

	solve(i + 1, sum + arr[i]);
	solve(i + 1, sum);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N >> S;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	sovle(0, 0);
	if (N == 0) ans -= 1;
	cout << ans << '\n';
}