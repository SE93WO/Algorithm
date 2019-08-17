#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;



int main() {
	int n, m;
	while (cin >> n >> m) {
		int cnt = 0;
		for (int i = n; i <= m; i++) {
			int num[10] = { 0 };
			string nn = to_string(i);
			for (int j = 0; j < nn.size(); j++) {
				num[nn[j] - '0']++;
			}

			bool check = true;
			for (int k = 0; k < 10; k++) {
				if (num[k] >= 2) {
					check = false;
					break;
				}
			}

			if (check) cnt++;
		}

		cout << cnt << endl;
	}
}
