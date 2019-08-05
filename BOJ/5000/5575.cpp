#include <bits/stdc++.h>
using namespace std;

int main() {
	int h1, m1, s1, h2, m2, s2;

	for (int i = 0; i < 3; i++) {
		cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
		s2 -= s1;
		if (s2 < 0) {
			s2 += 60;
			m2--;
		}
		m2 -= m1;
		if (m2 < 0) {
			m2 += 60;
			h2--;
		}
		h2 -= h1;
		cout << h2 << " " << m2 << " " << s2 << "\n";
	}
}