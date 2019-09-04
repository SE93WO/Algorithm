#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int DotToDot(int x_1, int x_2, int y_1, int y_2) {
	int distance = pow(x_1 - x_2, 2) + pow(y_1 - y_2, 2);
	return distance;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int x[4], y[4];
		for (int i = 0; i < 4; i++) {
			cin >> x[i];
			cin >> y[i];
		}
		double length[6];
		for (int i = 0, k = 0; i < 4; i++) {
			for (int j = i + 1; j < 4; j++) {
				length[k++] = DotToDot(x[i], x[j], y[i], y[j]);
			}
		}
		sort(length, length + 6);
		if (length[0] == length[1] && length[1] == length[2] && length[2] == length[3] && length[4] == length[5]) cout << "1" << endl;
		else cout << "0" << endl;
	}
	return 0;
}
