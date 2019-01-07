#include <iostream>
using namespace std;

int main() {
	int A, B, C;
	cin >> A >> B >> C;
	cout << ((B - A) > (C - B) ? B - A : C - B) - 1;
}