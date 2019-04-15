#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <vector>
#include <map>
#include <algorithm>

typedef long long ll;
using namespace std;

int gcd(int n, int m) {
	if (m == 0)
		return n;
	else
		return gcd(m, n%m);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, ans = 0;
	scanf("%d:%d", &n, &m);
	
	if (n > m)
		ans = gcd(n, m);
	else
		ans = gcd(m, n);

	printf("%d:%d", n / ans, m / ans);
}