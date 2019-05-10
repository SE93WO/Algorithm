#include <bits/stdc++.h>
using namespace std;

int main() {
	int input;
	vector<int> vi_1;
	vector<int> vi_2;

	for (int i = 0; i < 4; i++) {
		cin >> input;
		vi_1.push_back(input);
	}

	for (int i = 0; i < 2; i++) {
		cin >> input;
		vi_2.push_back(input);
	}

	sort(vi_1.begin(), vi_1.end());
	sort(vi_2.begin(), vi_2.end());

	int ans = vi_1[3] + vi_1[2] + vi_1[1] + vi_2[1];
	cout << ans << endl;

}