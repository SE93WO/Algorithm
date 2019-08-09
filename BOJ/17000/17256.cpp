#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int main() {
	int ax, ay, az;
	int bx, by, bz;
	cin >> ax >> ay >> az;
	cin >> bx >> by >> bz;

	cout << bx - az << " " << by / ay << " " << bz - ax;
}
