#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
	int n, d, p;
	cin >> n;
	vector<pair<int, int>> vii;
	for (int i = 0; i < n; i++) {
		cin >> p >> d;
		vii.push_back({ d, -p });
	}
	sort(vii.begin(), vii.end());

	priority_queue<int> pq;

	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum -= vii[i].second;
		pq.push({ vii[i].second });
		if (vii[i].first < pq.size()) {
			sum += pq.top();
			pq.pop();
		}
	}

	cout << sum;
}