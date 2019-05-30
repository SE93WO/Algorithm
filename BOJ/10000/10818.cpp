#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, input;
	vector<int> vi;
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input;
		vi.push_back(input);
	}

	sort(vi.begin(), vi.end());

	cout << vi.front() << " " << vi.back();
}
