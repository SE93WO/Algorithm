#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int main() {
	int a, b, c, d;
	int AmB, BmC, CmD, DmA;

	while (true) {
		int cnt = 0;
		cin >> a >> b >> c >> d;
		if (a == 0 && b == 0 && c == 0 && d == 0) break;
		while (true) {	
			if (a == b && b == c && c == d) {
				cout << cnt << endl;
				break;
			}
			
			AmB = abs(a - b);
			BmC = abs(b - c);
			CmD = abs(c - d);
			DmA = abs(d - a);

			a = AmB;
			b = BmC;
			c = CmD;
			d = DmA;

			cnt++;
		}
	}
}
