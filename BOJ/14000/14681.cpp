#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

typedef long long ll;
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int x, y;
	cin >> x >> y;
	if (x > 0 && y > 0)
		cout << "1";
	else if (x < 0 && y > 0)
		cout << "2";
	else if (x < 0 && y < 0)
		cout << "3";
	else if (x > 0 && y < 0)
		cout << "4";
}