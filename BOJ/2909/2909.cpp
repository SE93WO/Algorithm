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

	int C, K;
	cin >> C >> K;
	int num = 1;
	while (K--) {
		num *= 10;
	}
	printf("%d", (C / num + (num / 2 <= C % num)) * num);

	return 0;
}