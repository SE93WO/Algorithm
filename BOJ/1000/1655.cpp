#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int main() {
	int n;
	cin >> n;
	vector<int> vi(n);
	priority_queue<int, vector<int>, greater<int>> min_heap;
	priority_queue<int, vector<int>, less<int>> max_heap;

	while (n--) {
		int input;
		scanf("%d", &input);
		if (max_heap.size() == min_heap.size()) max_heap.push(input);
		else min_heap.push(input);

		if (!max_heap.empty() && !min_heap.empty() && !(max_heap.top() <= min_heap.top())) {
			int a = max_heap.top();
			int b = min_heap.top();

			max_heap.pop();
			min_heap.pop();

			max_heap.push(b);
			min_heap.push(a);
		}
		printf("%d\n", max_heap.top());
	}
}