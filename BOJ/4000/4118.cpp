#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int main() {
	int n, input;
	while (true) {
		cin >> n;
		if (n == 0) break;
		int arr[50] = { 0, };
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < 6; j++) {
				cin >> input;
				arr[input]++;
			}
		}
		bool check = true;
		for (int i = 1; i <= 49; i++) {
			if (arr[i] == 0) {
				check = false;
				break;
			}
		}

		if (check) cout << "Yes\n";
		else cout << "No\n";
	}
}
