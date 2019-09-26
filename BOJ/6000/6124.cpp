#include <iostream>
using namespace std;

int main() {
	int r, c, map[101][101], ans = 0, a, b;
	cin >> r >> c;
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			cin >> map[i][j];
	for (int i = 0; i < r - 2; i++) {
		for (int j = 0; j < c - 2; j++) {
			int temp = 0;
			for (int k = 0; k < 3; k++) {
				for (int l = 0; l < 3; l++) {
					temp += map[i + k][j + l];
				}
				if (temp > ans) {
					ans = temp;
					a = i;
					b = j;
				}
			}
		}
	}
	cout << ans << endl;
	cout << a + 1 << " " << b + 1;
}
