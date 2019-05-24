#include <bits/stdc++.h>
using namespace std;

int main() {
	int k, h;

	cin >> k;
	for (int t = 1; t <= k; t++) {
		cin >> h;
		string input;
		cin >> input;

		for (int i = 0; i < input.size(); i++) {
			if (input[i] == 'c')
				h++;
			else
				h--;
		}

		printf("Data Set %d:\n%d\n\n", t, h);
	}
}