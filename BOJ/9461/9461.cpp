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
	
	int T, N;
	ll arr[101] = { 1, 1, 1, 2, 2 };
	
	for (int i = 5; i < 101; i++) {
		arr[i] = arr[i - 1] + arr[i - 5];
	}

	cin >> T;
	while (T--) {
		cin >> N;
		cout << arr[N - 1] << endl;
	}
}