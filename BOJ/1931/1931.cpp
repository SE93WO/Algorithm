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

	int N, cnt = 0, num = 0;
	cin >> N;
	vector<pair<int, int>> room;

	for (int i = 0; i < N; i++) {
		int x, y;
		cin >> x >> y;
		room.push_back(pair<int, int>(y, x));
	}

	sort(room.begin(), room.end());

	for (int i = 0; i < N; i++) {
		if (room[i].second >= num) {
			num = room[i].first;
			cnt++;
		}
	}

	cout << cnt;
}

