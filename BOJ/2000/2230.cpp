#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> vi(n);

	for (int i = 0; i < n; i++) {
		cin >> vi[i];
	}

	sort(vi.begin(), vi.end());

	int nMin = 4e9;
	int j = 0;
	for (int i = 0; i < n && j < n;) {
		if (vi[i] - vi[j] >= m) {
			nMin = min(nMin, vi[i] - vi[j]);
			j++;
		}
		else {
			i++;
		}
	}
	cout << nMin;
}