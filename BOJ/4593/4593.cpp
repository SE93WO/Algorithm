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

	while (true) {
		string player_1, player_2;
		int ans_1 = 0, ans_2 = 0;
		cin >> player_1 >> player_2;
		if (player_1 == "E" && player_2 == "E") break;

		for (int i = 0; i < player_1.size(); i++) {
			if (player_1[i] == 'R') {
				if (player_2[i] == 'R') continue;
				if (player_2[i] == 'S') ans_1++;
				if (player_2[i] == 'P') ans_2++;
			}
			else if (player_1[i] == 'S') {
				if (player_2[i] == 'S') continue;
				if (player_2[i] == 'P') ans_1++;
				if (player_2[i] == 'R') ans_2++;
			}
			else if (player_1[i] == 'P') {
				if (player_2[i] == 'P') continue;
				if (player_2[i] == 'R') ans_1++;
				if (player_2[i] == 'S') ans_2++;
			}
	
		}

		cout << "P1: " << ans_1 << endl;
		cout << "P2: " << ans_2 << endl;
	}


}