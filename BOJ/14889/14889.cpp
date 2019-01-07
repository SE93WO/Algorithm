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
	cin >> N;
	vector<vector<int>> team(N, vector<int>(N));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> team[i][j];
		}
	}

	vector<int> vi(N);
	for (int i = 0; i < N / 2; i++) {
		vi[i] = 1;
	}

	sort(vi.begin(), vi.end());
	int ans = 1000000000;
	
	do {
		vector<int>  first, second;
		for (int i = 0; i < N; i++) {
			if (vi[i] == 0) {
				first.push_back(i);
			}
			else {
				second.push_back(i);
			}
		}

		int one = 0;
		int two = 0;
		for (int i = 0; i < N / 2; i++) {
			for (int j = 0; j < N / 2; j++) {
				if (i == j) continue;
				one += team[first[i]][first[j]];
				two += team[second[i]][second[j]];
			}
		}
		
		int diff = one - two;
		if (diff < 0) diff = -diff;
		if (ans > diff) ans = diff;
	} while (next_permutation(vi.begin(), vi.end()));

	cout << ans;
}