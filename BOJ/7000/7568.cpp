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
	vector<pair<int, int>> physical;
	vector<int> rank;
	for (int i = 0; i < N; i++) {
		int x, y;
		cin >> x >> y;
		physical.push_back(make_pair(x, y));
	}

	for (int i = 0; i < physical.size(); i++) {
		int count = 1;
		for (int j = 0; j < physical.size(); j++) {
			if (physical[i].first < physical[j].first && physical[i].second < physical[j].second)
				count++;
		}
		rank.push_back(count);
	}

	for (auto x : rank) {
		cout << x << " ";
	}
}