#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <queue>
#include <vector>
#include <stack>
#include <deque>
#include <algorithm>

typedef long long ll;
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, s;
	cin >> n >> s;
	vector<int> vi(n);
	for (int i = 0; i < n; i++) {
		cin >> vi[i];
	}

	int left = 0;
	int right = 0;
	int sum = vi[0];
	int ans = 0;

	while (left <= right && right < n) {
		if (sum < s) {
			right += 1;
			sum += vi[right];
		}
		else if (sum == s) {
			ans += 1;
			right += 1;
			sum += vi[right];
		}
		else if (sum > s) {
			sum -= vi[left];
			left++;
			if (left > right && left < n) {
				right = left;
				sum = vi[left];
			}
		}
	}

	cout << ans << '\n';
}