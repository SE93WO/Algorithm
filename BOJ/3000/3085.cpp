#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int n;
char candy[51][51];

int getMaxCandy() {
	int result = 1;
	for (int i = 0; i < n; i++) {
		int cnt = 1;
		for (int j = 1; j < n; j++) {
			if (candy[i][j] == candy[i][j - 1]) cnt++;
			else {
				result = max(result, cnt);
				cnt = 1;
			}
		}
		result = max(result, cnt);
	}
	for (int i = 0; i < n; i++) {
		int cnt = 1;
		for (int j = 1; j < n; j++) {
			if (candy[j][i] == candy[j - 1][i]) cnt++;
			else {
				result = max(result, cnt);
				cnt = 1;
			}
		}
		result = max(result, cnt);
	}
	return result;
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> candy[i][j];
		}
	}

	int ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			swap(candy[i][j], candy[i][j + 1]);
			ans = max(ans, getMaxCandy());
			swap(candy[i][j], candy[i][j + 1]);
			swap(candy[j][i], candy[j + 1][i]);
			ans = max(ans, getMaxCandy());
			swap(candy[j][i], candy[j + 1][i]);
		}
	}
	printf("%d\n", ans);
}