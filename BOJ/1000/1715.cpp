#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
	int n, ans = 0;
	cin >> n;
	priority_queue<int, vector<int>, greater<int>> heap;

	for (int i = 0; i < n; i++) {
		int input;
		cin >> input;
		heap.push(input);
	}

	int temp;
	for (int i = 0; i < n - 1; i++) {
		temp = heap.top();
		heap.pop();
		temp += heap.top();
		heap.pop();

		ans += temp;
		heap.push(temp);
	}
	cout << ans;
}