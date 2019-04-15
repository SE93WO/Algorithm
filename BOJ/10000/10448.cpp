#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <queue>
#include <vector>
#include <stack>
#include <deque>
#include <algorithm>

typedef long long ll;
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	vector<int> vi;
	cin >> T;

	for (int i = 1; i * (i + 1) / 2 <= 1000; i++) {
		vi.push_back(i * (i + 1) / 2);
	}

	while (T--) {
		int input, ans = 0;
		cin >> input;

		for (int i : vi) for (int j : vi) for (int k : vi) 
			if (i + j + k == input) ans = 1;

		cout << ans << endl;
	}

}