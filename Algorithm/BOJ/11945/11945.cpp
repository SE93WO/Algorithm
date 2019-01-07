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

	int n, m;
	string str;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> str;
		reverse(str.begin(), str.end());
		cout << str << endl;
	}
}