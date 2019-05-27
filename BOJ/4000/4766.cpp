#include <bits/stdc++.h>
using namespace std;

int main() {
	double input;
	vector<double> vd;
	while (true) {
		cin >> input;
		if (input == 999) break;
		vd.push_back(input);
	}

	for (int i = 1; i < vd.size(); i++) {
		printf("%.2f\n", vd[i] - vd[i - 1]);
	}
}
