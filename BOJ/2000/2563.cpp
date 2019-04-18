#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n, papers[101][101] = { 0, };
	int x, y, ans = 0;
	cin >> n;

	while (n--) {
		cin >> x >> y;
		for (int i = x; i < x + 10; i++)
			for (int j = y; j < y + 10; j++)
				ans += !papers[i][j]++;
	}

	cout << ans;
}
