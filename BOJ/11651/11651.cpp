#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <queue>
#include <vector>
#include <vector>
#include <map>
#include <stack>
#include <deque>
#include <algorithm>

typedef long long ll;
using namespace std;

auto cmp = [](pair<int, int> const & a, pair<int, int > const & b) {
	return a.second != b.second ? a.second < b.second : a.first < b.first;
};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N; scanf("%d", &N);
	vector<pair<int, int>> vec(N);
	for (int i = 0; i < N; i++) scanf("%d %d", &vec[i].first, &vec[i].second);
	sort(vec.begin(), vec.end(), cmp);
	for (int i = 0; i < N; i++) printf("%d %d\n", vec[i].first, vec[i].second);

	return 0;
}