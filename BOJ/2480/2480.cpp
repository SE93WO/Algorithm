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
	
	int dice_1, dice_2, dice_3, ans = 0;
	cin >> dice_1 >> dice_2 >> dice_3;
	
	if (dice_1 == dice_2 && dice_2 == dice_3) {
		ans = 10000 + dice_1 * 1000;
	}
	else if (dice_1 == dice_2) {
		ans = 1000 + dice_1 * 100;
	}
	else if (dice_2 == dice_3) {
		ans = 1000 + dice_2 * 100;
	}
	else if (dice_3 == dice_1) {
		ans = 1000 + dice_3 * 100;
	}
	else {
		ans = 100 * (max(dice_1, max(dice_2, dice_3)));
	}

	cout << ans;

	return 0;
}