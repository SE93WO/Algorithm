#include <iostream>
using namespace std;

const double pi = 3.141592;
int main() {
	double d1, d2;
	cin >> d1 >> d2;
	printf("%.6f", (2 * d1) + (2 * d2 * pi));
}