#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	priority_queue<int, vector<int>, greater<int>> pq;
	cin >> n;

	while (n--) {
		int input;
		cin >> input;

		if (!input && pq.empty()) {
			cout << "0" << "\n";
		}
		else if (!input) {
			cout << pq.top() << "\n";
			pq.pop();
		}
		else
			pq.push(input);
	}
	return 0;
}