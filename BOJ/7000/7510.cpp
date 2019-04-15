#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	bool check[40001];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int length[3];
		cin >> length[0] >> length[1] >> length[2];
		sort(length, length + 3);
		if (length[0] * length[0] + length[1] * length[1] == length[2] * length[2]) {
			check[i] = true;
		}
		else {
			check[i] = false;
		}
	}
	
	for (int i = 0; i < n; i++) {
		if (check[i] == true) {
			printf("Scenario #%d:\n", i + 1);
			printf("yes\n");
		}
		else {
			printf("Scenario #%d:\n", i + 1);
			printf("no\n");
		}
		printf("\n");
	}
}