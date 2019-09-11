#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, m, k, ans = 0;
	cin >> n >> m >> k;
	ans = min(m, k) + min(n - m, n - k);
	cout << ans;
}