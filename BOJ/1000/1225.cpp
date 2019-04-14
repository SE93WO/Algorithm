#include <iostream>
#include <string>
using namespace std;

int main() {
	long long x = 0, y = 0;
	string A, B;

	cin >> A >> B;

	for (int i = 0; i < A.size(); i++)
		x += A[i] - '0';
	for (int i = 0; i < B.size(); i++)
		y += x * (B[i] - '0');

	cout << y;
}