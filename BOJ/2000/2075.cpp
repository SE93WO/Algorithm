#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int main() {
	int n;
	priority_queue<int> pq;
	scanf("%d", &n);
	for (int i = 0; i < n * n; i++) {
		int input;
		scanf("%d", &input);
		if (pq.size() < n) pq.push(-input);
		else {
			if (-pq.top() < input) {
				pq.pop();
				pq.push(-input);
			}
			else
				continue;
		}
	}
	cout << -pq.top();
}