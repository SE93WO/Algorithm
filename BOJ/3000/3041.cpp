#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	char board[5][5];
	int ans = 0;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> board[i][j];
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if(board[i][j] != '.') 
				ans += abs((board[i][j] - 'A') / 4 - i) + 
				abs((board[i][j] - 'A') % 4 - j);
		}
	}
	cout << ans;
}
