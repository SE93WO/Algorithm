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

int a, p;
vector<int> vi;
int res = 0;

int solve() {
	vi.push_back(a);
	while (true) {
		while (a != 0) {
			res += (int)pow(a % 10, p);
			a /= 10;
		}

		for (int i = 0; i < vi.size(); i++) {
			if (res == vi[i]) return i;
		}
		
		vi.push_back(res);
		a = res;
		res = 0;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> a >> p;
	cout << solve() << '\n';

	return 0;
}