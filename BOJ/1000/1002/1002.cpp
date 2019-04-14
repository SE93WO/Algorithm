#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int x1, y1, r1, x2, y2, r2;
	double dist;
	int T;

	cin >> T;
	while (T--) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		dist = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
		if ((x1 == x2 && y1 == y2 && r1 == r2))
			cout << "-1" << endl;
		else if (r1 + r2 == dist || r1 + dist == r2 || r2 + dist == r1)
			cout << "1" << endl;
		else if (r1 + r2 < dist || r1 + dist < r2 || r2 + dist < r1)
			cout << "0" << endl;
		else
			cout << "2" << endl;
	}
}