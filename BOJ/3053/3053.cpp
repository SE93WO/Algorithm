#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.14159265358979323846

int main() {
	int R;
	double euclid;
	scanf("%d", &R);

	euclid = R * R * PI;
	printf("%.6f\n%.6f", R * R * PI, R * R * 2.0);
}