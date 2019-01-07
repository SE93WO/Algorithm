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

	int N, K, num = 0, cnt = 0;
	int coin[10];
	cin >> N >> K;

	for (int i = 0; i < N; i++) {
		cin >> coin[i];
	}

	while (K != 0) {
		for (int i = 0; i < N; i++) {
			if (K - coin[i] >= 0) {
				num = coin[i];
			}
		}
		K -= num;
		cnt++;
	}

	cout << cnt;
}

