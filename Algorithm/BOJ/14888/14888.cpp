#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <vector>
#include <stack>
#include <deque>
#include <algorithm>

typedef long long ll;
using namespace std;

pair<int, int> calc(vector<int> &vi, int index, int cur, int plus, int minus, int mul, int div) {
	int n = vi.size();
	if (index == n) {
		return make_pair(cur, cur);
	}

	vector<pair<int, int>> temp;

	if (plus > 0) {
		temp.push_back(calc(vi, index + 1, cur + vi[index], plus - 1, minus, mul, div));
	}
	if (minus > 0) {
		temp.push_back(calc(vi, index + 1, cur - vi[index], plus, minus - 1, mul, div));
	}
	if (mul > 0) {
		temp.push_back(calc(vi, index + 1, cur * vi[index], plus, minus, mul - 1, div));
	}
	if (div > 0) {
		temp.push_back(calc(vi, index + 1, cur / vi[index], plus, minus, mul, div - 1));
	}

	auto ans = temp[0];
	for (auto p : temp) {
		if (ans.first < p.first) {
			ans.first = p.first;
		}
		if (ans.second > p.second) {
			ans.second = p.second;
		}
	}
	return ans;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	vector<int> vi(n);
	for (int i = 0; i < n; i++) {
		cin >> vi[i];
	}

	int plus, minus, mul, div;
	cin >> plus >> minus >> mul >> div;
	auto p = calc(vi, 1, vi[0], plus, minus, mul, div);
	cout << p.first << '\n';
	cout << p.second << '\n';

	return 0;
}