#include <iostream>
using namespace std;

int main() {
	int N, input;
	int player[201][3] = { 0, };
	int ans[201] = { 0, };
	int score[101][3] = { 0, };

	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> input;
			score[input][j]++;
			player[i][j] = input;
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 3; j++) {
				if (score[player[i][j]][j] == 1)
					ans[i] += player[i][j];
		}
	}
	
	for (int i = 0; i < N; i++) {
		cout << ans[i] << endl;
	}
}