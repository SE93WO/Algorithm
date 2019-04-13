#include <bits/stdc++.h>
using namespace std;

int arr[64][64];
void func(int x, int y, int size) {
	int cur = arr[y][x];
	bool flag = true;
	for (int i = y; (i < y + size) && flag; i++)
		for (int j = x; (j < x + size) && flag; j++)
			if (cur != arr[i][j]) flag = false;

	if (flag) cout << cur;
	else {
		cout << "(";
		func(x, y, size / 2);
		func(x + size / 2, y, size / 2);
		func(x, y + size / 2, size / 2);
		func(x + size / 2, y + size / 2, size / 2);
		cout << ")";
	}
}
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%1d", &arr[i][j]);
		}
	}
	func(0, 0, n);
	return 0;																																		
}