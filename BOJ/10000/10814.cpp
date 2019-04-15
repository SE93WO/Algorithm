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

bool cmp(pair<int, string> x, pair<int, string> y) {
	if (x.first < y.first)
		return true;
	else if (x.first == y.first)
		return false;
	return false;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	vector<pair<int, string>> vis;

	int n;
	cin >> n;
	while (n--) {
		int age;
		string name;

		cin >> age >> name;
		vis.push_back(pair<int, string>(age, name));
	}

	stable_sort(vis.begin(), vis.end(), cmp);

	for (auto x : vis) {
		cout << x.first << " " << x.second << "\n";
	}


	return 0;
}