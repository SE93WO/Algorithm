#include <bits/stdc++.h>
using namespace std;

int main() {
	int s = 0, t = 0, input;
	for (int i = 0; i < 4; i++) {
		cin >> input;
		s += input;
	}

	for (int i = 0; i < 4; i++) {
		cin >> input;
		t += input;
	}

	s > t ? printf("%d", s) : printf("%d", t);
}