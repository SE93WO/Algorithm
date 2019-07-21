#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int main() {
	double n, m, b;
	while (cin >> n >> m >> b) {
		int year = 0;
		double sum = n;
		while (sum <= b) {
			sum += (sum / 100) * m;
			year++;
		}
		cout << year << '\n';
	}
}
