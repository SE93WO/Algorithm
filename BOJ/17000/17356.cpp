#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int main() {
	int a, b;
	cin >> a >> b;
	double ans = (double)(b - a) / 400;
	cout << 1 / (1 + pow(10, ans));
}
