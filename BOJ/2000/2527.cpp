#include <iostream>
using namespace std;

void check(int x_1, int y_1, int x_2, int y_2, int x_3, int y_3, int x_4, int y_4) {
	if ((x_2 == x_3 && y_2 == y_3) || (x_1 == x_4 && y_2 == y_3) || (x_2 == x_3 && y_1 == y_4) || (x_1 == x_4 && y_1 == y_4)) {
		cout << "c\n";
	}
	else if ((x_2 == x_3 && y_2 != y_3) || (x_1 == x_4 && y_2 != y_3) || (x_2 != x_3 && y_1 == y_4) || (x_1 != x_4 && y_1 == y_4)) {
		cout << "b\n";
	}
	else if (x_2 < x_3 || x_4 < x_1 || y_2 < y_3 || y_4 < y_1) {
		cout << "d\n";
	}
	else {
		cout << "a\n";
	}
}
int main() {
	int x_1, y_1, x_2, y_2, x_3, y_3, x_4, y_4;
	for (int i = 0; i < 4; i++) {
		cin >> x_1 >> y_1 >> x_2 >> y_2 >> x_3 >> y_3 >> x_4 >> y_4;
		check(x_1, y_1, x_2, y_2, x_3, y_3, x_4, y_4);
	}
}