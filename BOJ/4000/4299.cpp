#include <iostream>
typedef long long ll;
using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	if (x < y) {
		cout << "-1";
		return 0;
	}
	int plus = x + y;
	int minus = x - y;
	if (plus % 2 != 0 || minus % 2 != 0)
		cout << "-1";
	else
		cout << plus / 2 << " " << minus / 2;

}