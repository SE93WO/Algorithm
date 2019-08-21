#include <iostream>
#include <cmath>
typedef long long ll;
using namespace std;

int main() {
	while (true) {
		double a, b;
		cin >> a >> b;
		if (a == 0 && b == 0) break;
		//cout << sqrt(1 - pow(b / a, 2.0));
		printf("%.3lf\n", sqrt(1 - pow(b / a, 2.0)));
	}
}