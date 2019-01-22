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
	
	int n, a;
	cin >> n >> a;
	vector<int> vi(n);

	for (int i = 0; i < n; i++) {
		int input;
		cin >> input;
		vi[i] = input;
	}

	sort(vi.begin(), vi.end());

	cout << vi[a - 1];

}