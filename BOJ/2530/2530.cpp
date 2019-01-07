#include <iostream>
using namespace std;

int main() {
	int A, B, C, D;
	cin >> A >> B >> C >> D;

	cout << ((A * 3600 + B * 60 + C + D) / 3600) % 24 << " ";
	cout << ((A * 3600 + B * 60 + C + D) % 3600) / 60 << " ";
	cout << ((A * 3600 + B * 60 + C + D) % 3600) % 60;
 }