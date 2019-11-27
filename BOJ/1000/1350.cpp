#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, cluster;
	cin >> n;
	vector<int> vi(n);

	for (int i = 0; i < n; i++) {
		cin >> vi[i];
	}

	cin >> cluster;

	
	long long cnt = 0;

	for (int i = 0; i < n; i++) {
		if (vi[i] == 0) continue;
		if (vi[i] % cluster) cnt++;
		cnt += vi[i] / cluster;
	}

	long long int ans = cnt * cluster;
	cout << ans;
}