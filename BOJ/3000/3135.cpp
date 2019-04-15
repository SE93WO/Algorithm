#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a, b, n;
	scanf("%d %d %d", &a, &b, &n);

	int ans = abs(a - b);
	for (int val, i = 0; i < n; ++i) {
		scanf("%d", &val);
		ans = min(ans, abs(b - val) + 1);
	}

	printf("%d", ans);

	return 0;
 }