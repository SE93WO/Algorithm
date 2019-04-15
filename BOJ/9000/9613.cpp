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


int gcd(int x, int y) {
	if (y == 0) return x;
	return gcd(y, x % y);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	int n;
	cin >> t;

	while (t--) {
		cin >> n;
		ll sum = 0;
		vector<int> num(n);

		for (int i = 0; i < n; i++) {
			cin >> num[i];
		}

		for(int i = 0; i < n - 1; i++)
			for (int j = i + 1; j < n; j++) {
				sum += gcd(num[i], num[j]);
			}

		cout << sum << "\n";
	}

	return 0;
}