#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);	
	
	int team_1[10] = { 0, }, team_2[10] = { 0, };
	for (int i = 0; i < 9; i++) {
		cin >> team_1[i];
	}
	for (int i = 0; i < 9; i++) {
		cin >> team_2[i];
	}

	bool check = false;
	for (int i = 0, sum_1 = 0, sum_2 = 0; i < 9; i++) {
		sum_1 += team_1[i];
		if (sum_1 > sum_2)
			check = true;
		sum_2 += team_2[i];
	}

	printf(check ? "Yes" : "No");
}