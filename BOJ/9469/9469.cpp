#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);	

	int p, n; 
	float d, a, b, f;
	cin >> p;

	while (p--) {
		cin >> n >> d >> a >> b >> f;
		float ans = (f * d) / (a + b);
		printf("%d %.2f\n", n, ans);
	}
}