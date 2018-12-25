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

	int N;
	vector<int> vi;
	cin >> N;

	while (true) {
		if (N == 1) {
			break;
		}

		for (int i = 2; i <= N; i++) {
			if (N % i == 0) {
				vi.push_back(i);
				N /= i;
				break;
			}
		}	
	}

	for (auto x : vi) {
		cout << x << endl;
	}
}

