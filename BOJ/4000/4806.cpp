#include <bits/stdc++.h>
using namespace std;

int main() {
	int cnt = 0;
	char ch;

	while (scanf("%c", &ch) != EOF) {
		if (ch == '\n') cnt++;
	}

	cout << cnt;

	return 0;
}