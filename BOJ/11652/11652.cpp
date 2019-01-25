#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <queue>
#include <vector>
#include <tuple>
#include <map>
#include <tuple>
#include <stack>
#include <deque>
#include <algorithm>

typedef long long ll;
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, it = 0;
	long long input;
	map<long long, int> m;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input;
		m[input]++;
	}

	vector<pair<int, ll>> v;
	for (map<ll, int> ::iterator it = m.begin(); it != m.end(); ++it) {
		v.push_back(make_pair(-it->second, it->first));
	}
	sort(v.begin(), v.end());
	cout << v[0].second;
}