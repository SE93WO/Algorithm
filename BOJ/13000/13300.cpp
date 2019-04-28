#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main() {
	int n, k, s, y;
	int cnt = 0;
	int student[2][6] = { 0, };

	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> s >> y;
		student[s][y - 1]++;
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 6; j++) {
			cnt += (student[i][j] + k - 1) / k;
		}
	}

	cout << cnt;
}