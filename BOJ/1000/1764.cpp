#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	string input;
	vector<string> vs_1;
	vector<string> vs_2;

	cin >> n >> m;

	for (int i = 0; i < n + m; i++) {
		cin >> input;
		vs_1.push_back(input);
	}

	sort(vs_1.begin(), vs_1.end());

	for (int i = 1; i < n + m; i++) {
		if (vs_1[i].compare(vs_1[i - 1]) == 0) {
			vs_2.push_back(vs_1[i]);
		}
	}

	cout << vs_2.size() << endl;

	for (int i = 0; i < vs_2.size(); i++) {
		cout << vs_2[i] << endl;
	}

	return 0;
}