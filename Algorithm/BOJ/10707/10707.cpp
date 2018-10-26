#include <iostream>
using namespace std;

int main() {
	int A, B, C, D, P;
	int X, Y;
	cin >> A >> B >> C >> D >> P;

	X = A * P;
	if (P > C) {
		Y = B + D * (P - C);
	}
	else
		Y = B;

	if (X > Y)
		cout << Y;
	else
		cout << X;
}