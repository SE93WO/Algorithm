#include <iostream>
using namespace std;

int arr[128][128];
int white = 0, blue = 0;

void solve(int x, int y, int size) {
	if (size == 1) {
		if (arr[x][y] == 0) white++;
		else blue++;
		return;
	}
	bool flag = true;
	for (int i = x; i < x + size; i++) {
		for (int j = y; j < y + size; j++) {
			if (arr[x][y] != arr[i][j]) {
				flag = false;
				break;
			}
		}
	}
	if (flag) {
		if (arr[x][y] == 0) white++;
		else blue++;
		return;
	}
	solve(x, y, size / 2);
	solve(x + size / 2, y, size / 2);
	solve(x, y + size / 2, size / 2);
	solve(x + size / 2, y + size / 2, size / 2);
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	solve(0, 0, n);
	cout << white << endl;
	cout << blue << endl;

	return 0;
}