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
	double cost[] = { 350.34, 230.90, 190.55, 125.30, 180.90 };

	int T;
	cin >> T;
	while (T--) {
		int n;
		double ans = 0;
		for (int i = 0; i < 5; i++) {
			cin >> n;
			ans += n * cost[i];
		}

		printf("$%.2f\n", ans);
	}
}

