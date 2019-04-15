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

	string s;
	cin >> s;
	vector<string> alph(s.size());

	int size = s.size();
	for (int i = 0; i < size; i++) {
		alph[i] = s;
		s.erase(0, 1);
	}

	sort(alph.begin(), alph.end());

	for (auto x : alph) {
		cout << x << endl;
	}
}

