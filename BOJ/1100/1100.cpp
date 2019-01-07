#include <iostream>
using namespace std;

char board[8][8];

int main() {
	int white = 0;

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cin >> board[i][j];
			if (i % 2 == 0 && j % 2 == 0 && board[i][j] == 'F')
				white++;
			else if (i % 2 != 0 && j % 2 != 0 && board[i][j] == 'F')
				white++;
		}
	}

	cout << white;
}