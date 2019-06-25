#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	queue<int> qu;
	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		qu.push(i);
	}

	while (!qu.empty()) {
		cout << qu.front() << " ";
		qu.pop();

		int temp = qu.front();
		qu.pop();
		qu.push(temp);
	}
}
