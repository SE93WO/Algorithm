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

int N, M;
int map[9][9];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	cin >> T;
	while (T--) {
		int N;
		cin >> N;
		int input, ans = 0;
		for (int i = 0; i < N; i++) {
			cin >> input;
			ans += input;
		}
		cout << ans << endl;
	}
	
}

