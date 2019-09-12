#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t, n, m;
	cin >> t;
	while (t--) {
		int candidates[10] = { 0, };
		cin >> n >> m;
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				int num; 
				cin >> num;
				candidates[j] += num;
			}
		}

		int nmax = 0 ;
		for (int i = 0; i < n; i++) {
			nmax = max(candidates[i], nmax);
		}
		for (int i = 0; i < n; i++) {
			if (nmax == candidates[i])
				cout << i + 1 << endl;
		}
	}
}